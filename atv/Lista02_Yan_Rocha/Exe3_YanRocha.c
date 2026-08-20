#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese_Brazil");
	
	int a,b;
	
	printf("Digite dois numeros e irei colocalos em ordem crescente\n");
	scanf("%i %i",&a,&b);
	
	
	if (a<b)
		printf("\n%i \n%i", a,b);
	else if(a>b)
		printf("\n%i \n%i", b,a);
}