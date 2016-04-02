/*
Elabore um algoritmo para inserir 20 nomes e respectivos salários, e em seguida informar o nome daqueles que ganham acima da média
*/

#include <stdio.h>

#define INDICE 4

struct cadastro {
	char nome[50];
	float salario;
};

int main(void) {
	
	struct cadastro c[INDICE];
	float media = 0.0f;

	for (int i = 0; i < INDICE; i++) {
		printf("Digite o %do nome: ", (i + 1));
		scanf(" %[^\n]s", c[i].nome);
		printf("Agora o %do salario: ", (i + 1));
		scanf(" %f", &c[i].salario);

		media += c[i].salario;
	}

	media /= INDICE;
	printf("Media: %.2f\n", media);

	for (int i = 0; i < INDICE; i++) {
		if (c[i].salario > media)
			printf("%s ganha acima da media\n", c[i].nome);
	}

	return 0;
}