#include <stdio.h>
#include <math.h>


int main() {
    int dimension, iterador;
    float promedio, varianza, desviacion;

    printf("Ingrese la dimensión del vector\n");
    scanf("%d",&dimension);

    float vector[dimension];

    for (iterador = 0; iterador < dimension; ++iterador) {
        printf("Ingrese el valor de la posición %d\n",iterador+1);
        scanf("%f",&vector[iterador]);
    }

    //cálculo de la suma de todas las posiciones del vector
    for(iterador = 0; iterador < dimension; ++iterador){
        promedio = promedio+vector[iterador];
    }
    //Promedio = suma de todas las posiciones entre numero de posiciones
    promedio = promedio/dimension;

    //calculando la varianza
    for (iterador = 0; iterador < dimension ; ++iterador) {
        varianza = varianza + pow(vector[iterador]-promedio,2);
    }
    varianza=(varianza/dimension);

    //desviacion estandar = la raiz cuadrada de la varianza
    desviacion = sqrt(varianza);

    printf("Promedio: %f\n",promedio);
    printf("Varianza: %f\n", varianza);
    printf("Desviación típica: %f\n", desviacion);

    return 0;
}