#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float aumento,salario;
	salario = 1000;
	aumento = 0.015;
	i=18+1;
	
	
	for(i; i<=26;i++)
	{
		salario = salario+(salario * aumento);
		aumento = aumento * 2;
	}
			printf("O salario atual é de = %.2f", salario);
}