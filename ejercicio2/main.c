#include <stdio.h>

int main() {
    int dimension, iterador, posicion;

    printf("Ingrese la dimensión del vector\n");
    scanf("%d",&dimension);

    int vector[dimension];

    for (iterador = 0; iterador < dimension ; ++iterador) {
        printf("Ingrese el valor (entero) para la posición %d\n",iterador+1);
        scanf("%i",&vector[iterador]);
    }

    printf("¿Qué posición del vector desea borrar?\n");
    scanf("%d",&posicion);
    vector[posicion-1]=0;

    for (int iterador = 0; iterador < dimension; ++iterador) {
        printf("El valor del la posición %d es: %d\n",iterador+1,vector[iterador]);
    }

    return 0;
}