/*
Faça uma cópia de um vetor1 em um vetor2, eliminando elementos repetidos
*/

#include <stdio.h>

#define INDICE 5

int main(void) {
	
	int v1[INDICE] = {1,2,3,4,3};
	int v2[INDICE] = {0,0,0,0,0};
	int aux;

	for (int i = 0; i < INDICE; i++) {
		aux = 0;
		for (int j = 0; j < INDICE; j++) {
			if (i == j)
				continue;
			if (v1[i] == v1[j]) {
				aux = 1;
				break;
			}
		}
		if (!aux)
			v2[i] = v1[i];
	}

	for (int i = 0; i < INDICE; i++)
		printf("%d ", v2[i]);

	printf("\n");

	return 0;
}