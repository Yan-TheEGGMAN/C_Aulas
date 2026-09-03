#include <stdio.h>
#include <string.h>
#include <locale.h>

int somaDobro(int a, int b);

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int x, y, res;
	
	printf("\nDigite o primeiro número: ");
	scanf("%d%*c", &x);
	printf("\nDigite o segundo número: ");
	scanf("%d%*c", &y);	
	res = somaDobro(x,y);
	printf("\nSoma = %d", res);
	getchar();
	return 0;
	}
	
	int somaDobro(int a, int b){
	
	int soma;
	a = 2*a;
	b = 2*b;
	soma = a+b;
	return soma;
		}