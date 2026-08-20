#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int apro, exam, rep, alunos;
	float nota1,nota2, medAlu, medSas, sala ;
	
	alunos =0;
	sala = 0;
	rep = 0, apro = 0, exam = 0;
	
	while(alunos != 6)
	{
		printf("\nAluno: %d \nDigite a primeira nota: ",alunos+1);
		scanf("%f", &nota1);
		printf("Digite a segunda nota: ");
		scanf("%f", &nota2);
		medAlu= (nota1+nota2)/2;
		printf("\nA média desse aluno é de: %.2f\n", medAlu);
		
		alunos= alunos+1;
		sala = sala+nota1+nota2;
		
		if(medAlu <3){
			rep++;
		}
		else if(medAlu <=7){
			exam++;
		}
		else if(medAlu <=10){
			apro++;
		}
		else{
			printf("Média invalida");
			return 0;
		}
	}
	medSas = sala/12;
	
	if (medSas >10){
		printf("Média invalida");
		return 0;
	}
		
		
	printf("\n\nA média da classe é de %.2f com:\nAprovados %d\nEm exame %d\nReprovados %d", medSas, apro, exam, rep);
}