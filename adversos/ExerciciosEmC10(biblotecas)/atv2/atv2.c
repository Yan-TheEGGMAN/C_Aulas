#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "C:\Users\yan_k_rocha.EDU_FIESC\Documents\C_Aulas\adversos\ExerciciosEmC10(biblotecas)\atv2\atv2.h"

int main()
{
	int num1, num2, final;
	
	printf("Digite dois numeros inteiros positivos e retornarei a soma entre eles\n");
	printf("Digite o primeiro inteiro: ");
	scanf("%i",&num1);
	printf("\nDigite o segundo inteiro: ");
	scanf("%i",&num2);
	
	
	final = subRotina1(num1,num2);
	
	printf("\nA soma dos numeros é: %i", final);
	
}
//--------------------------