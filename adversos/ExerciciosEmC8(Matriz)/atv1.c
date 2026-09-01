#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float m[2][2],r[2][2], maiorValor = 0;
	int  i, j;
	
	printf("Defina essa matriz e lhe entregarei outra matriz com seus valores multiplicados pelo maior fornecido\n");
	
	for(i=0;i<2;i++){ //PRIMEIRAAAAAAAAAAA tabela m
		for(j=0;j<2;j++){
			printf("Digite o valor %d da linha %d: ", j+1, i+1);
			scanf("%f", &m[i][j]);
			
			if(m[i][j]> maiorValor){
				maiorValor = m[i][j];
			}
		}	
	}
	
	for(i=0;i<2;i++){//SEGUNDAAAAAAAAAA tabela r
		for(j=0;j<2;j++){
			
			r[i][j] = m[i][j]*maiorValor;
			}
		}
		
		printf("\n\nExibindo agora a Tabela R\n");
	
	for(i=0;i<2;i++){//TERCEIRAAAAAAAAAA resultado
		printf("\n");
		for(j=0;j<2;j++){
			
			printf("%.2f \t", r[i][j]);
		}
		
	}
	
	
}
	
	