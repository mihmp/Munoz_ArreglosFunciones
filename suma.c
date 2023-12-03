#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL)); // Ingreso semilla de numeros aleatorios//

    int filas, columnas; // Defino variables//

    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);

    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    if (filas <= 0 || columnas <= 0)
    {
        printf("No es valida las dimensiones, debe ser un numero mayor a 0.\n");
        return 1; // Se cierra por el error//
    }
    // Declaro respuesta y matrices//
    int matrizA[filas][columnas];
    int matrizB[filas][columnas];
    int answer[filas][columnas];

    // Lleno matriz A y la muestro en pantalla//
    printf("\nMatriz A:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matrizA[i][j] = rand() % 101; // Numeros aleatorios del 0 al 100//
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n"); //Salto de linea//
    }

    //Lleno la matriz B y la muestro en pantalla//
    printf("\nMatriz B:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matrizB[i][j] = rand() %101;
            printf("%d\t", matrizB[i][j]);
        }
        printf("\n"); //Salto de linea//
    }

    //Realizo la suma de las 2 matrices y declaro el resultado//
    printf("La suma de la Matriz A y la matriz B es:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            answer[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%d\t", answer[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
