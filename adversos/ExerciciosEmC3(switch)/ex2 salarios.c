#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese_Brazil");
	
	int op;
	float salario, novSas, salImpo;
	
	printf("Digite seu Salário\nR$:");
	scanf("%f", &salario);
	
	printf("\nEscolha entre uma das opções abaixo\n1 - Imposto\n2 - Novo salário \n3 - Classificação\n\nR:");
	scanf("%i", &op);
	
	switch (op)
	{
		case 1:
			if(salario <500){
				salImpo = salario - (salario*0.05);
				printf("Seu sálario com o imposto aplicado é de R$:%f",salImpo);
			}
				
			else if((salario >=500) && (salario <= 850)){
				salImpo = salImpo - (salImpo*0.10);
				printf("Seu sálario com o imposto aplicado é de R$:%f",salImpo);
		}
			else if(salario > 850){
				salImpo = salImpo - (salImpo*0.15);
				printf("Seu sálario com o imposto aplicado é de R$:%f",salImpo);
		}
			break;
				
		case 2:
			if(salario >1500){
				novSas = salario + 25;
				printf("Seu sálario com o aumento aplicado é de R$:%f",novSas);
			}
			
			else if((salario >= 750) && (salario <= 1500)){
				novSas = salario + 50;
				printf("Seu sálario com o aumento aplicado é de R$:%f",novSas);
			}

				
			else if((salario >= 450) && (salario <= 749)){
				novSas = salario + 75;
				printf("Seu sálario com o aumento aplicado é de R$:%f",novSas);
			}

				
			else if(salario < 450){
				novSas = salario + 100;
				printf("Seu sálario com o aumento aplicado é de R$:%f",novSas);
			}
			break;
		
		case 3:
			if (salario <= 700){
				printf("Você é mal Remunerado");
		}
			
			else{
				printf("Você é bem remunerado");
		}
				
	}
}