#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num, total =0, med;
	
	printf("Escreva três notas e irei dizer a média\nNumero 1: ");
	scanf("%f", &num);
	total = total +num;
	printf("Numero 2: ");
	scanf("%f", &num);
	total = total +num;
	printf("Numero 3: ");
	scanf("%f", &num);
	total = total +num;
	med = total/3;

	
	printf("A média foi de: %.2f", med);
}