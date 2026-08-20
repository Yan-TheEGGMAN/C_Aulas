#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i,anoI,anoF;
	float aumento,salario;
	salario = 1000;
	aumento = 0.015;
	anoI=20+1; //antes do mais o ano de inicio e depois n mexer(lógica de aumento para ser aplicado no primeiro aumento invez de entrada)
	anoF=26;
	
	
	while(anoI != anoF)
	{
		salario = salario+(salario * aumento);
		aumento = aumento * 2;
		anoI++;
	}
			printf("O salario atual é de = %.2f", salario);
}