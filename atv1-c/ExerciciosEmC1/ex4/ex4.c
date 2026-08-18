#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese_Brazil");
    float pe,jarda,polegada,milha;
    
    printf("Digite o valor em pés e passarei quanto equivalem em outros valores\nR:");
    scanf ("%f%*c", &pe);
    
    jarda = pe/3;
    polegada = pe*12;
    milha = jarda/1760;
    
    printf("Pés: %.3f \nJardas: %.3f \nPolegadas: %.3f\n Milhas: %.3f \n", pe,jarda,polegada,milha);
    
    system("pause");
    return 0;
}
