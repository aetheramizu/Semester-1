#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

void multiply_matrices(int p[SIZE][SIZE], int q[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0; 
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += p[i][k] * q[k][j];
            }
        }
    }
}

void fill_matrix_with_random_numbers(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = rand() % 10; 
        }
    }
}

int main() {
    int p[SIZE][SIZE];
    int q[SIZE][SIZE];
    int result[SIZE][SIZE];

    srand(time(0));

    printf("Mengisi matriks dengan angka acak...\n");
    fill_matrix_with_random_numbers(p);
    fill_matrix_with_random_numbers(q);

    printf("Melakukan perkalian matriks...\n");
    multiply_matrices(p, q, result);

    printf("Hasil perkalian matriks :\n");
    for (int i = 0; i < 2048; i++) { 
        for (int j = 0; j < 2048; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    printf("Perkalian matriks selesai.\n");
    return 0;
}