#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int subRotina1(int num1,int num2)
{		
	if(num1<num2){//numero 2 maior que o um
		int cont = num1+1, i, final = 0;
		
		for(i=cont;i<num2;i++){
			final = final + cont;
			cont++;
		}
		
		return final;
	}
	
	else{ //numero 1 maior que o segundo
		int cont = num2+1, i, final = 0;
		
		for(i=cont;i<num1;i++){ // i = contador +1 = 2; enquanto i menor que num1 que é 5 repita, a cada um i++ 2+1=3
			final = final + cont;
			cont++;
		}
		
		return final;
	}	
}
//--------------------------