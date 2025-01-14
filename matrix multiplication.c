#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 2048

void multiply_matrices(int first[SIZE][SIZE], int second[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0; 
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += first[i][k] * second[k][j];
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
    int first[SIZE][SIZE];
    int second[SIZE][SIZE];
    int result[SIZE][SIZE];

    srand(time(0));

    printf("Mengisi matriks dengan angka acak...\n");
    fill_matrix_with_random_numbers(first);
    fill_matrix_with_random_numbers(second);

    printf("Melakukan perkalian matriks...\n");
    multiply_matrices(first, second, result);

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