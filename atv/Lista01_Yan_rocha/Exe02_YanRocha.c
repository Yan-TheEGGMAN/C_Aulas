#include <stdio.h>
int main()
{
    float salario;
    
    printf("Digite seu salario: ");
    scanf("%f%*c", &salario);
    
    float grat = salario*0.05;
    float impo = salario*0.07;
    
    float Fsalario = (salario+grat)- impo;
    printf("Seu salario liquido sera de: %.2f \n",Fsalario);
    
    system("pause");
    return 0;
}
