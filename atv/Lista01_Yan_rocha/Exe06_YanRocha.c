#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num, total =0, med, peso, somPeso;
	somPeso=0;
	
	printf("Escreva três notas e irei dizer a média\nNumero 1: ");
	scanf("%f", &num);
	printf("Peso: ");
	scanf("%f",&peso);
	
	somPeso = somPeso + peso;
	num = num*peso;
	total = total + num;
	
	printf("Numero 2: ");
	scanf("%f", &num);
	printf("Peso: ");
	scanf("%f",&peso);
	
	somPeso = somPeso + peso;
	num = num*peso;
	total = total + num;
	
	printf("Numero 3: ");
	scanf("%f", &num);
	printf("Peso: ");
	scanf("%f",&peso);
	
	somPeso = somPeso + peso;
	num = num*peso;
	total = total + num;
	
	med = total/somPeso;

	
	printf("A média foi de: %.2f", med);
}