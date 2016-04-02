/*
4. Gerar (sem ler do usuário) uma matriz 5x5 cujos elementos são:

 1  2  3  4  5
 6  7  8  9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

A seguir calcule e imprima a soma dos elementos de cada linha da matriz e também
gere e imprima um vetor com os elementos da diagonal principal da matriz
*/

#include <stdio.h>

int main(void) {
	
	int mat[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	int vet[5];
	int somaLinha = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			somaLinha += mat[i][j];
			if (i == j)
				vet[i] = mat[i][j];
		}
		printf("Soma da linha %d: %d\n", (i + 1), somaLinha);
		somaLinha = 0;
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		printf("%d ", vet[i]);
	}
	printf("\n");

	return 0;
}