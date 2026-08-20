#include <stdio.h>
int main()
{
    float salario;
    
    printf("Digite seu salario: ");
    scanf ("%f%*c", &salario);
    
    float AumSalario; AumSalario = salario + (salario*0.25); 
    
    printf("Seu salario final sera de: %.2f \n", AumSalario);
    system("pause");
    return 0;
}
