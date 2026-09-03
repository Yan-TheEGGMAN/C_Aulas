#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int  i, j, mat[3][6], vet[18], cont =0;
	 
	printf("Escreva 18 numeros, irei organizalos em uma tabela 3x6\n");
	
	for(i=0;i<18;i++){ //PRIMEIRAAAAAAAAAAA vetor 18
		printf("Escreva o valor %d: ", i+1);
		scanf("%d",&vet[i]);
		}	
	
	printf("\nExibindo versão 3x6\n");
	
	for(i=0;i<3;i++){//SEGUNDAAAAAAAAAA matriz 3x6
		for(j=0;j<6;j++){
			mat[i][j] = vet[cont];
			cont++;
			}
		}	
		
	for(i=0;i<3;i++){//TERCEIRAAA Exibição 3x6
		printf("\n");
		for(j=0;j<6;j++){
				
			printf("%d \t", mat[i][j]);
			}
		}
}
	
	