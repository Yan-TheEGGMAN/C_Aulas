#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese_Brazil");
	
	int num1;
	int num2;
	int num3;

	printf("Digite um numero qualquer\n");
	scanf("%i",&num1);
	printf("Digite outro numero qualquer\n");
	scanf("%i",&num2);
	printf("Digite outro numero qualquer\n");
	scanf("%i",&num3);
	
	if ((num1 > num2) && (num1 > num3))
		printf("Numero um é o maior numero");
	else if((num2 > num1) && (num2 > num3))
		printf("Numero dois é o maior numero");
	else if((num3 > num1) && (num3 > num2))
		printf("Numero três é o maior numero");
}