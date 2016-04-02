/*
Fazer um algoritmo que descubra o maior valor de um vetor
*/

#include <stdio.h>

#define INDICE 5

int main(void) {
	
	int v[INDICE];
	int maior;

	for (int i = 0; i < INDICE; i++) {
		printf("Digite o %do numero do vetor: ", (i + 1));
		scanf(" %d", &v[i]);
	}

	maior = v[0];

	for (int i = 0; i < INDICE; i++) {
		if (v[i] > maior)
			maior = v[i];
	}

	printf("Maior: %d\n", maior);

	return 0;
}