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

void imprimirTotalesAnuales(int datos[NUM_INSUMOS][NUM_MESES * 2]) {
    for (int i = 0; i < NUM_INSUMOS; i++) {
        int totalIngresos = 0, totalEgresos = 0;
        for (int j = 0; j < NUM_MESES * 2; j += 2) {
            totalIngresos += datos[i][j];
            totalEgresos += datos[i][j + 1];
        }
        printf("\nTotales anuales de Insumo %d: Ingresos totales: %d, Egresos totales: %d\n", i + 1, totalIngresos, totalEgresos);
    }
}

int main() {
    int datos[NUM_INSUMOS][NUM_MESES * 2];
        int opcion;


    generarDatosAleatorios(datos);

    // Menú de opciones
    do{
        printf("\nMenu:\n");
        printf("1. Imprimir detalle de ingresos y egresos\n");
        printf("2. Imprimir totales anuales\n");
        printf("3. Salir\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                imprimirDetalle(datos);
                break;
            case 2:
                imprimirTotalesAnuales(datos);
                break;
            case 3:
                printf("Eligio la opcion de salir\n");
                return 0;
            default:
                printf("Opción no válida\n");
        }
    } while (opcion !=3);
    }
        

