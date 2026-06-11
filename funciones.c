#include <stdio.h>
#include <string.h>
#include "archivo.h"

void carga_de_fichas(articulos_t *articulos ){
    int i = 0;
    char articulo[90];
    int articulo_index, sucursal, opc;

    do
    {
        printf("Ingrese la descripcion del articulo: ");
        scanf("%s",articulo);
    
        i = 0;
        while (articulos[i].descripcion[0] && strcmp(articulo, articulos[i].descripcion)) i++;
        articulo_index = i;
        strcpy(articulos[i].descripcion, articulo);

        printf("\n%s, Indice: %d\n", articulos[articulo_index].descripcion, articulo_index);

        printf("Para que sucursal va a realizar la carga? (1,2,3)");
        scanf("%d", &sucursal);

        printf("Ingrese la cantidad del articulo para la sucursal %d: ", sucursal);
        scanf("%d", &articulos[articulo_index].cantidad_sucursal[sucursal-1]);

        
        articulos[articulo_index].total += articulos[articulo_index].cantidad_sucursal[sucursal-1];  
        
          

        printf("Desea ingresar otro articulo? 1-Si, 2-No");
        scanf("%d",&opc);

    } while (opc==1);

}

void tabla(articulos_t *articulos ){
    int i = 0;
    char articulo[90];
    int articulo_index, sucursal, opc;
    printf("Articulo\tSucursal 1\tSucursal 2\tSucursal 3\tTotal\n");
    while(i< CANT_ARTICULOS && articulos[i].descripcion[0]){
        printf("%s\t\t%d\t\t%d\t\t%d\t\t%d\n", articulos[i].descripcion, articulos[i].cantidad_sucursal[SUCURSAL_1], articulos[i].cantidad_sucursal[SUCURSAL_2], articulos[i].cantidad_sucursal[SUCURSAL_3],articulos[i].total);
        i++;
    }

}

void ordenamiento(articulos_t *articulos ){
    int i = 0;
    char articulo[90];
    int articulo_index, sucursal, opc;
    for ( opc = 1; opc < CANT_ARTICULOS; opc++)
    {
        for ( i = 0; i < CANT_ARTICULOS-1; i++)
        {
            if(articulos[i].total<articulos[i+1].total){
                strcpy (articulo,articulos[i].descripcion);
                strcpy(articulos[i].descripcion,articulos[i+1].descripcion);
                strcpy(articulos[i+1].descripcion, articulo);

                articulo_index = articulos[i].cantidad_sucursal[SUCURSAL_1];
                articulos[i].cantidad_sucursal[SUCURSAL_1] = articulos[i+1].cantidad_sucursal[SUCURSAL_1];
                articulos[i+1].cantidad_sucursal[SUCURSAL_1] = articulo_index;

                articulo_index = articulos[i].cantidad_sucursal[SUCURSAL_2];
                articulos[i].cantidad_sucursal[SUCURSAL_2] = articulos[i + 1].cantidad_sucursal[SUCURSAL_2];
                articulos[i + 1].cantidad_sucursal[SUCURSAL_2] = articulo_index;

                articulo_index = articulos[i].cantidad_sucursal[SUCURSAL_3];
                articulos[i].cantidad_sucursal[SUCURSAL_3] = articulos[i + 1].cantidad_sucursal[SUCURSAL_3];
                articulos[i + 1].cantidad_sucursal[SUCURSAL_3] = articulo_index;

                articulo_index = articulos[i].total;
                articulos[i].total = articulos[i + 1].total;
                articulos[i + 1].total = articulo_index;
            }
            
        }
        
    }
}

void tabla_ordenada(articulos_t *articulos){

    int i = 0;
    char articulo[90];
    int articulo_index, sucursal, opc;

    printf("\n\n###################################");
    printf("\n##############ORDENADO#############");
    printf("\n################################### \n\n");

    i = 0;
    // printf("Articulo\tSucursal 1\tSucursal 2\tSucursal 3\tTotal\n");
    // while (i < CANT_ARTICULOS && articulos[i].descripcion[0])
    // {
    //     printf("%s\t\t%9d\t\t%4d\t\t%3d\t\t%8d\n", articulos[i].descripcion, articulos[i].cantidad_sucursal[SUCURSAL_1], articulos[i].cantidad_sucursal[SUCURSAL_2], articulos[i].cantidad_sucursal[SUCURSAL_3], articulos[i].total);
    //     i++;
    // }

    tabla(articulos);

}