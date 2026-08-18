#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i,soma,num;
	soma = 0; //Inicialização da variavel SOMA com o valor zero
	
	for(i=1; i<=5;i++)
	{
		printf("Digite um número: ");
		scanf("%d%*c", &num);
		soma = soma + num; // Acumulando o valor da variável NUM na variável SOMA
	}
			printf("Soma = %d", soma);
}