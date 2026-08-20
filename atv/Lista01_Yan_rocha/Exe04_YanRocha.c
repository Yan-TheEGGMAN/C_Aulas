#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num, total =0;
	
	printf("Escreva quatro numeros e irei soma-los\nNumero 1: ");
	scanf("%d*c", &num);
	total = total +num;
	printf("Numero 2: ");
	scanf("%d*c", &num);
	total = total +num;
	printf("Numero 3: ");
	scanf("%d*c", &num);
	total = total +num;
	printf("Numero 4: ");
	scanf("%d*c", &num);
	total = total +num;
	
	printf("A soma foi de: %d", total);
}