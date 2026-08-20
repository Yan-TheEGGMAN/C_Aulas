#include <stdio.h>
#include <locale.h>

	main(){
		setlocale(LC_ALL,"portuguese_Brazil");

		if (getchar() == 'p'){
			printf("Você digitou p\n");
			printf("Pressione outra tecla");
			getchar();
		}
	}