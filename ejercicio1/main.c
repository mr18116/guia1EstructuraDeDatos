#include <stdio.h>

int main() {
    int dimension;
    int iterador;
    //se le solicita al usuario que ingrese el tamaño del vector
    printf("Ingrese la dimensión del vector\n");
    scanf("%i",&dimension);

    /*se declaran dos vectores del mismo tamaño, uno para que lo
     * llene el usuario y otro donde se realizará la compia*/
    int vector1[dimension];
    int vector2[dimension];

    //se piden los datos de cada posición al usuario
    for (iterador = 0; iterador < dimension; ++iterador) {
        printf("Ingrese el valor (entero) de la posición %i\n",iterador+1);
        scanf("%i",&vector1[iterador]);
    }

    //se realiza la copia del vector1 dentro del vector2
    for ( iterador = 0; iterador < dimension; ++iterador) {
        vector2[iterador] = vector1[iterador];
    }

    //se muestran los datos al usuario del vector copiado
    for (iterador = 0; iterador < dimension; ++iterador) {
        printf("El valor del vector en la posición %d es: %d\n",iterador+1,vector2[iterador]);
    }


    return 0;
}