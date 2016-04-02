/*
2. Faça uma classe que colete dez nomes de pessoas e os armazene em um array.
Depois peça ao usuário para inserir um nome e verifique se esta determinada pessoa
foi cadastrada no array.
*/

#include <stdio.h>
#include <string.h>

#define INDICE 10

int main(void) {
	
	char nome[INDICE][50];
	char nomeBusca[50];
	int busca = 0;

	for (int i = 0; i < INDICE; i++) {
		printf("Digite o %do nome: ", (i + 1));
		scanf(" %[^\n]s", nome[i]);
	}

	printf("Busque por um nome no array: ");
	scanf(" %[^\n]s", nomeBusca);

	for (int i = 0; i < INDICE; i++) {
		if (strcmp(nome[i], nomeBusca) == 0) {
			printf("O nome %s foi encontrado no array\n", nomeBusca);
			busca += 1;
			break;
		}
	}

	if (busca == 0)
		printf("O nome %s nao foi encontrado no array\n", nomeBusca);

	return 0;
}