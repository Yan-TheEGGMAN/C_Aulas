#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "C:\Users\yan_k_rocha.EDU_FIESC\Documents\C_Aulas\adversos\ExerciciosEmC10(biblotecas)\atv4\atv4.h"

int main()
{		
	setlocale(LC_ALL, "portuguese");

	int v[4],i;
	
	for(i=0;i<4;i++){
		printf("\nDigite o valor do %i° numero: ",i+1);
		scanf("%i",&v[i]);
	}
	
	subRotina1(v);
}
//--------------------------