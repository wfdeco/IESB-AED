/*
5. Desenvolva um algoritmo que leia um vetor de 20 posições inteiras e o coloque em
ordem crescente, utilizando a seguinte estratégia de ordenação:
- selecione o elemento do vetor 20 posições que apresenta o menor valor;
- troque este elemento pelo primeiro;
- repita estas operações, envolvendo agora apenas os 19 elementos restantes
(selecionando o de menor valor com a segunda posição), depois os 18 elementos
(trocando o de menor valor com a terceira posição), depois os 17, 16 e assim
por diante, até restar um único elemento, o maior deles
*/

#include <stdio.h>

#define INDICE 20

int main(void) {
	
	int vet[INDICE];
	int menor, aux;

	for (int i = 0; i < INDICE; i++) {
		printf("Digite o %do numero do vetor: ", (i + 1));
		scanf(" %d", &vet[i]);
	}

	// selection sort
	for (int i = 0; i < (INDICE - 1); i++) {
		menor = i;
		for (int j = (i + 1); j < INDICE; j++) {
			if (vet[j] < vet[menor])
				menor = j;
		}
		if (menor != i) {
			aux = vet[i];
			vet[i] = vet[menor];
			vet[menor] = aux;
		}
	}

	for (int i = 0; i < INDICE; i++) {
		printf("%d ", vet[i]);
	}
	printf("\n");

	return 0;
}