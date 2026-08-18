#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese_Brazil");
	
	char op;
	float num1,num2;
	printf("Digite um numero, escolha um operador e digite outro numero \n");
	scanf("%f %c %f",&num1,&op,&num2);
	
	switch(op)
	{
		case '+':
			printf(" = %.2f",num1+num2);
			break;
			
		case '-':
			printf(" = %.2f",num1-num2);
			break;
		default:
			printf("OPERADOR INVALIDO");
	}
}