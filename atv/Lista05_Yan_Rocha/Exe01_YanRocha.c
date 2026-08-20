#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int mortos, feminino, masculino, bebe, meses, i; //Todos estão mortos 0_0
	char sexo;
	
	mortos = 0;
	feminino = 0;
	masculino = 0;
	bebe = 0;
	i =1;
	
	printf("Digite uma informações sobre crianças MORTAS e gerarei uma média para você no final\nOBS: DIGITE X NO ESPAÇO DE GENERO CASO QUEIRA PARAR\n\n");
	
	while(i !=0)
	{
		printf("\n(Em mesês)Idade que morreu: ");
		scanf("%d", &meses);
		printf("Genero M ou F: ");
		scanf(" %c",&sexo);
		
		if((sexo == 'F')||(sexo == 'f')){
			feminino = feminino +1;
		}
		else if((sexo == 'M')||(sexo == 'm')){
			masculino = masculino +1;
		}
		else if((sexo == 'x')||(sexo == 'X')){
			i = 0;
			mortos = mortos -1;
		}
		else {
			printf("Caractere invalido!\n\n");
		}
		
		if(meses <= 24){
			bebe = bebe +1;
		}
		
		mortos = mortos +1;// :(
	}
	
	printf("\n\nO numero de crianças mortas é de: %d \n\nDesses %d são masculinos e %d são femininos\n\nOs que morreram com menos de 24 meses ou menos são: %d", mortos, masculino,feminino,bebe);
}