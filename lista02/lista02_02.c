/*
Elimine de um vetor todas as ocorrências de um elemento dado
*/

#include <stdio.h>

#define INDICE 5

int main(void) {
	
	int v[INDICE] = {1,2,3,4,3};
	int eliminado;

	printf("Digite um numero a ser eliminado do vetor: ");
	scanf(" %d", &eliminado);

	for (int i = 0; i < INDICE; i++) {
		if (v[i] == eliminado) {
			for (int j = i; j < INDICE; j++) {
				v[j] = v[j + 1];
			}
			v[INDICE - 1] = 0;
		}
	}

	for (int i = 0; i < INDICE; i++)
		printf("%d ", v[i]);

	printf("\n");

	return 0;
}