#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese_Brazil");
	
	float a,b;
	
	printf("Digite 2 numeros: ");
	scanf("%d %d",&a,&b);
	
	if(b)
		printf("%.4f", a/b);
	else
	 printf("Não posso dividir por zero\n");
		
}