#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_INSUMOS 30
#define NUM_MESES 12

void generarDatosAleatorios(int datos[NUM_INSUMOS][NUM_MESES * 2]) {
    srand(time(NULL));

    for (int i = 0; i < NUM_INSUMOS; i++) {
        for (int j = 0; j < NUM_MESES * 2; j += 2) {
            datos[i][j] = rand() % 101;  // Ingresos: Números aleatorios entre 0 y 100
            datos[i][j + 1] = rand() % 101;  // Egresos: Números aleatorios entre 0 y 100
        }
    }
}

void imprimirDetalle(int datos[NUM_INSUMOS][NUM_MESES * 2]) {
    for (int i = 0; i < NUM_INSUMOS; i++) {
        printf("\nDetalle de Insumo %d:\n", i + 1);
        for (int j = 0; j < NUM_MESES * 2; j += 2) {
            printf("Mes %d: Ingresos: %d, Egresos: %d\n", j / 2 + 1, datos[i][j], datos[i][j + 1]);
        }
    }
}


