#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "C:\Users\yan_k_rocha.EDU_FIESC\Documents\C_Aulas\adversos\ExerciciosEmC10(biblotecas)\atv3\atv3.h"


int main()
{		
	int h,m,s,seg;
	
	printf("Digite a quantidade de segundos: ");
	scanf("%i",&seg);
	
	subRotina1(seg,&h,&m,&s);
	
	printf("\nEquivale a %i hora(s)\t %i minuto(s)\t %i segundo(s)",h,m,s);
}
//--------------------------