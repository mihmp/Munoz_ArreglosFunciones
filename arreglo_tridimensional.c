#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, z; // Dimensiones del arreglo tridimensional

    // Solicitar al usuario las dimensiones
    printf("Ingrese el tamaño del arreglo tridimensional (x y z): ");
    scanf("%d %d %d", &x, &y, &z);

    if (x <= 0 || y <= 0 || z <= 0) {
        printf("Las dimensiones deben ser números mayores a 0.\n");
        return 1;
    }

    // Declarar e inicializar el arreglo tridimensional
    int arregloTridimensional[x][y][z];

    // Inicializar todas las matrices en ceros, excepto la última en unos
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                if (i == x - 1 && j == y - 1 && k == z - 1) {
                    arregloTridimensional[i][j][k] = 1; // Última matriz en unos
                } else {
                    arregloTridimensional[i][j][k] = 0; // Otras matrices en ceros
                }
            }
        }
    }

    // Imprimir todos los elementos del arreglo tridimensional
    printf("\nElementos del arreglo tridimensional:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                printf("%d ", arregloTridimensional[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
