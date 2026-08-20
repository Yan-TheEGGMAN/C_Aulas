#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese_Brazil");
	
	int idade;
	
	printf("Digite sua idade e irei classifica-lo\n");
	scanf("%i",&idade);
	
	
	if (idade <0)
		printf("Idade inválida");
	else if(idade <12)
		printf("Você é uma criança!");
	else if((idade >11) && (idade <19))
		printf("Você é um adolescente");
	else if((idade >18) && (idade <25))
		printf("Você é um jovem adulto");
	else if((idade >24) && (idade <60))
		printf("Você é um adulto");
	else if(idade >59)
		printf("Você é um idoso");
}