#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int code,maisAci,menosAci,veiculosT,acidentesT,cidadeMais,cidadeMenos,cont, i;
	float medVeiculos,medAcidentes, veiculos,acidentes ;
	maisAci = 0;
	menosAci = 99999;
	veiculosT = 0;
	acidentesT = 0;
	cont = 0;
	
	printf("A seguir vc irá digitar o Codigo, veículos e numeros de acidentes de 5 cidades, lhe fornecerei dados baseado nisso\n\n");
	for(i=1; i<=5;i++)
	{
		printf("\nDigite o código da cidade: ");
		scanf("%d", &code);
		printf("Digite a quantidade de veículos: ");
		scanf("%f", &veiculos);
		printf("Digite o índice de acidentes: ");
		scanf("%f", &acidentes);
		printf("\n");
		
		if(acidentes > maisAci){
			maisAci = acidentes;
			cidadeMais = code;
		}
		
		if (acidentes < menosAci){
			menosAci = acidentes;
			cidadeMenos = code;
		}
		
		if(veiculos < 2000)
		{
		acidentesT = acidentesT + acidentes;
		cont = cont+1;
		}
		
		veiculosT = veiculosT + veiculos;
	}
	//------------------------------------
		if(cont >= 1)
		{
			medAcidentes = acidentesT/cont;
		}
		
		medVeiculos = veiculosT/5;
			
		printf("--------------------------------------------------------------------------------\nO maior índice de acidentes é de: %i \nSendo da cidade: %i \n\nO menor índice é de: %i \nSendo da cidade: %i \n\nA média de veículos das cidades é de: %f\n\n A média de acidentes em cidades com menós de 2000 veículos é de: %f",maisAci,cidadeMais,menosAci,cidadeMenos, medVeiculos, medAcidentes );	
}