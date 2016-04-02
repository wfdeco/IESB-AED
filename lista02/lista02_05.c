/*
Uma empresa decidiu fazer um levantamento sobre o perfil dos candidatos que se apresentarem
para o preenchimento de vagas de seu quadro de funcionários. Para cada candidato, serão
solicitados sexo, a idade e se tem ou não experiência no serviço. Esses dados serão
guardados em um array, crie uma classe que represente um candidato e após um array de
objetos desta classe na classe principal. Escrever um algoritmo para ler os dados dos
candidatos e, a seguir, calcular e imprimir as seguintes informações:
- O número de candidatos do sexo feminino e masculino
- A idade média das mulheres que já têm experiência no serviço
- A menor idade entre as mulheres com mais de 45 anos, com relação ao total de homens
- O número de homens com idade inferior a 30 anos sem experiência no serviço
*/

#include <stdio.h>

#define INDICE 3

struct candidato {
	char sexo;
	int idade;
	char exp;
};

int main(void) {
	
	struct candidato c[INDICE];

	float mediaIdadeMulherExp = 0.0f;
	float porcHomemVelho;

	int masc, fem, semDef, expMulher, menorExp, homemVelho, homemNovoSemExp;
	masc = fem = semDef = expMulher = menorExp = homemVelho = homemNovoSemExp = 0;

	for (int i = 0; i < INDICE; i++) {
		printf("\n");
		printf("Candidato %d\n", (i + 1));

		printf("Sexo (M ou F): ");
		scanf(" %c", &c[i].sexo);

		printf("Idade: ");
		scanf(" %d", &c[i].idade);

		printf("Experiencia: ");
		scanf(" %c", &c[i].exp);

		if (c[i].sexo == 'm' || c[i].sexo == 'M') {
			masc++;
			if (c[i].idade > 45)
				homemVelho++;
			else if (c[i].idade < 30 && (c[i].exp == 'n' || c[i].exp == 'N'))
				homemNovoSemExp++;
		} else if (c[i].sexo == 'f' || c[i].sexo == 'F') {
			fem++;
			if (c[i].exp == 's' || c[i].exp == 'S') {
				mediaIdadeMulherExp += c[i].idade;
				if (expMulher == 0)
					menorExp = c[i].idade;
				else if (menorExp > c[i].idade)
					menorExp = c[i].idade;
				expMulher++;
			}
		} else
			semDef++;

	}

	printf("\n");
	printf("Candidatos do sexo:\n");
	printf("- Masculino: %d\n", masc);
	printf("- Feminino: %d\n", fem);
	if (semDef != 0)
		printf("- Nao Definido: %d\n", semDef);

	printf("\n");
	mediaIdadeMulherExp /= expMulher++;
	printf("Idade media das mulheres com experiencia:\n");
	printf("%.2f anos\n", mediaIdadeMulherExp);

	if (menorExp != 0) {
		printf("\n");
		printf("Menor idade entre as mulheres com experiencia:\n");
		printf("%d anos\n", menorExp);
	}

	printf("\n");
	porcHomemVelho = ((homemVelho * 100.0f) / masc);
	printf("Porcentagem de homens acima dos 45 anos:\n");
	printf("%.1f%%\n", porcHomemVelho);

	printf("\n");
	printf("Homens com idade inferior a 30 anos e sem experiencia:\n");
	printf("%d\n", homemNovoSemExp);

	return 0;
}