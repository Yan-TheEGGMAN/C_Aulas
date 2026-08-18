#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese_Brazil");
	
	int dia,mes;
	printf("Digite o dia do seu nascimento e envie, após isso digite o numero do mês que nasceu. Com essas informações falarei seu signo \n");
	scanf("%i %i",&dia,&mes);
	
	switch(mes)
	{
		case 1:
			if(dia > 31)
				printf("Dia invalido");	
										//Janeiro
			if(dia < 20)
				printf("Você é de Capricornio");
			else
				printf("Você é de Aquário");
			
		case 2:	
			if(dia > 31)
				printf("Dia invalido");	
	
										//Fevereiro
			if(dia <19)		
				printf("Você é de Aquário");
			else
				printf("Você é de Peixes");
			break;
			
		case 3:	
			if(dia > 31)
				printf("Dia invalido");
										//Março 
			if(dia <20)		
				printf("Você é de Peixes");
			else
				printf("Você é de Áries");
			break;
			
		case 4:	
			if(dia > 31)
				printf("Dia invalido");
										//Abril
			if(dia < 20)		
				printf("Você é de Áries");
			else
				printf("Você é de Touros");
			break;
			
		case 5:			
			if(dia > 31)
				printf("Dia invalido");	
										//Maio
			if(dia <21)		
				printf("Você é de Touros");
			else
				printf("Você é de Gêmeos");
			break;
			
		case 6:	
			if(dia > 31)
				printf("Dia invalido");
										//junho
			if(dia <21)		
				printf("Você é de Gêmeos");
			else
				printf("Você é de Câncer");
			break;
			
		case 7:		
			if(dia > 31)
				printf("Dia invalido");	
										//julho
			if(dia <22)		
				printf("Você é de Câncer");
			else
				printf("Você é de Leão");
			break;
			
		case 8:	
			if(dia > 31)
				printf("Dia invalido");
										//agosto
			if(dia <23)		
				printf("Você é de Leão");
			else
				printf("Você é de Vigem");
			break;
			
		case 9:	
			if(dia > 31)
				printf("Dia invalido");	
										//setembro
			if(dia <23)		
				printf("Você é de Virgem");
			else
				printf("Você é de Libra");
			break;
			
		case 10:	
			if(dia > 31)
				printf("Dia invalido");	
										//outubro
			if(dia <23)		
				printf("Você é de Libra");
			else
				printf("Você é de Escorpião");
			break;
			
		case 11:
			if(dia > 31)
				printf("Dia invalido");	
										//Novembro
			if(dia <22)		
				printf("Você é de Escorpião");
			else
				printf("Você é de Sagitário");
			break;
			
		case 12:			
			if(dia > 31)
				printf("Dia invalido");	
				break;
										//Dezembro
			if(dia <22)		
				printf("Você é de Sagitário");
			else
				printf("Você é de Capricórnio");
			break;
	
			
		default:
			printf("Mês invalido");
	}
}