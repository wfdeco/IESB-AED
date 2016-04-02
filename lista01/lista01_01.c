/*
1. Elabore um programa que leia um vetor de 100 elementos inteiros, colocando 1
na posição correspondente a um número par e 0 a um númeroß ímpar
*/

#include <stdio.h>

#define INDICE 100

int main(void) {
	
	int num[INDICE];

	for (int i = 0; i < INDICE; i++) {
		printf("Digite o %do numero: ", (i + 1));
		scanf(" %d", &num[i]);

		if (num[i] % 2 == 0)
			num[i] = 1;
		else
			num[i] = 0;
	}

	for (int i = 0; i < INDICE; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");

	return 0;
}