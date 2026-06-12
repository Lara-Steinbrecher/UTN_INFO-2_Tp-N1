#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "funciones.h"


int main(void)
{

    articulos_t articulos[CANT_ARTICULOS] = {0};
    
    printf("Bienvendio al final de Info 1\n\n");

    /*CARGA de las fichas*/

    carga_de_fichas(articulos);
    
    /* Impresion de fichas cargadas*/

    tabla(articulos);

    /* Ordenamiento */

    ordenamiento(articulos);

    tabla_ordenada(articulos);

    return 0;
}