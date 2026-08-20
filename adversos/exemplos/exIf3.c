#include <stdio.h>
#include <locale.h>

	main(){
		setlocale(LC_ALL,"portuguese_Brazil");

		char ch;
		printf("digite uma letra entre A e Z\n");
		ch = getchar();
		if ((ch >= 'A') && (ch <= 'Z'))
			printf("você acertou!");
	}