#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i,j, l;
	char nloja[8][80],nprodu[4][80];
	float valor [8][4];
	
	for(i=0;i<4;i++){
		printf("\nDigite o nome do produto %i: ", i+1);
		scanf("%79s", &nprodu[i]);
		printf("\n%s CONFIRMADO",nprodu[i]);
	}
	
	for(i=0;i<8;i++){
		printf("\nDigite o nome da loja: ");
		scanf("%79s", &nloja[i]);
		printf("\nSelecionado agora loja [%s]\n", nloja[i]);
		for(j=0;j<4;j++){
			printf("Digite o valor de %s na loja %s: R$",nprodu[j], nloja[i]);
			scanf("%f", &valor[i][j]);
		}	
	}
	
	printf("Mostrando agora relações de preço que não ultrapassem R$60,00");
		
		for(i=0;i<8;i++){
			for(j=0;j<4;j++){
				if(valor[i][j] < 60.00){
				printf("\nNa loja [%s] o valor de [%s] é %.2f ", nloja[i], nprodu[j],valor[i][j]);
				}
			}
		
		}
}