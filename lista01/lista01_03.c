/*
3. Escreva um programa que leia 2 matrizes A e B, cada uma com 3 linhas e 2 colunas.
Construa uma matriz C de mesma dimensão (3x2) onde C é formada pela soma dos elementos
da matriz A com os elementos da matriz B (exemplo: C[1][1] = A[1][1] + B[1][1])
*/

#include <stdio.h>

int main(void) {
	
	int A[3][2], B[3][2], C[3][2];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("Digite o %do numero da matriz A: ", (j + 1 + (i * 2)));
			scanf(" %d", &A[i][j]);
		}
	}

	printf("\n");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("Digite o %do numero da matriz B: ", (j + 1 + (i * 2)));
			scanf(" %d", &B[i][j]);
		}
	}

	printf("\n");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}

	return 0;
}