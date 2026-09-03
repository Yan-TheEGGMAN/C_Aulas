#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int subRotina1(int v[4])
{		
	setlocale(LC_ALL, "portuguese");

	int i;
	
	int maior = 0;
	int menor = 99999999;
	
	for(i=0;i<4;i++){
		
		if(v[i] > maior){
			maior = v[i];
		}
		
		if(v[i] < menor){
			menor = v[i];
		}
	}
	
	printf("\nO maior valor é %i\nO menor valor é %i",maior,menor);
}
//--------------------------