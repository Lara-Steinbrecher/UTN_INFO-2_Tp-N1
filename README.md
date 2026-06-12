# UTN-INFO-2-Tp-N1 🚧

Alumno: Lara Diaz Steinbrecher

Repo Codigo a Refactorizar: [REPO](https://github.com/DamRCorba/Informatica-2/tree/main/02_Estructuras/ejemplos/Ejemplo3)

## Consigna

Hacer el refactor del código de "Resolucion_Final_Informatica_1" utilizando estructuras, funciones y separacion de archivos. ver código

Crear archivos funciones.c y funciones.h.
- En funciones.c se deberan desarrollar las funciones.
- En funciones.h se deberan agregar los prototipos, definiciones y demas constantes.

- Modificar el codigo para el uso de estructuras.
- Entregar el codigo y un readme explicativo en un repositorio git nuevo.


La separacion de codigo queda a criterio del alumno, aunque se debe intentar separar en la mayor cantidad de funciones posibles para la legibilidad del codigo.

## Archivos

- main.c
- funciones.h
- funciones.c


## Proceso

Main contiene solamente la función principal donde se llama a:
- Carga de fichas: permite por consola ingresar los articulos y sus caracteristicas
- Tabla: Funcion que imprime la tabla de articulos
- Ordenamiento: Ordena los articulos por cantidad total

## Fix

El codigo original utilizaba un for para ir sumando la cantidad total de cada uno de los articulos tal que: 

> for (i = 0; i < 3; i++) articulos[articulo_index].total += articulos[articulo_index].cantidad_sucursal[i];

Pero no reseteaba el total, por lo que se iban sumando articulos no existentes por lo que se debe resetear antes de volver a sumar:

> articulos[articulo_index].total = 0;

> for (i = 0; i < 3; i++) articulos[articulo_index].total += articulos[articulo_index].cantidad_sucursal[i];





