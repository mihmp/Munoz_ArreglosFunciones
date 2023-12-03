/*#include <stdio.h>
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
}*/

//Añado las librerias necesarias para trabajar mi codigo//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Uso la función para llenar la matriz con numeros aleatorios//

void matriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 101; 
        }
    }
}

// Vuelvo a usar void y hago la suma de 2 matrices
void suma(int filas, int columnas, int matrizA[filas][columnas], int matrizB[filas][columnas], int respuesta[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            respuesta[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

    // Declaro las matrices A, B y la de respuesta, que debí hacerlo anteriormente//
    int matrizA[filas][columnas];
    int matrizB[filas][columnas];
    int respuesta[filas][columnas];

    // Se ingresa semilla para dar numeros aleatorios//
    
    int main() {
    srand(time(NULL));

    //Vuelvo a definir variables y muestro en pantalla para que el usuario ingrese por teclado el numero de filas y columnas//
    int filas, columnas; 

    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);

    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    //Coloco una condicion para que cuando se ingrese un numero menor o igual a 0 se cierre el programa indicando el error//
    if (filas <= 0 || columnas <= 0) {
        printf("ERROR... Los numeros deben ser mayores a 0.\n");
        return 1; // Se cierra por el error//
    }
