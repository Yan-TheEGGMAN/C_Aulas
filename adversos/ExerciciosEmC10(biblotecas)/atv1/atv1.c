#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "C:\Users\yan_k_rocha.EDU_FIESC\Documents\C_Aulas\adversos\ExerciciosEmC10(biblotecas)\atv1\atv1.h"

int main()
{
	int val1;
	
	printf("Digite um valor inteiro: ");
	scanf("%i",&val1);
	
	if(val1 == 0){
		printf("Valor é neutro");
	}
	
	else if(sub_rotina1(val1) == 0){
		printf("Valor negativo");
	}
	else{
		printf("Valor positivo");
	}
}
//--------------------------