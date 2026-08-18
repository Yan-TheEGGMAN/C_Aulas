#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese_Brazil");
    float valor,juros,rendimento,Fvalor;
    
    printf("Digite o valor do deposito: ");
    scanf("%f%*c", &valor);
    printf("\nDigite o valor do rendimento(porcentagem ganha com apenas o numero): ");
    scanf("%f%*c", &juros);
    
    rendimento = valor*(juros/100);
    Fvalor = valor+rendimento;
    
    printf("Seu valor do rendimento é: R$%.2f % \nSeu valor de final é: R$%.2f \n", rendimento, Fvalor);
    
    system("pause");
    return 0;
}
