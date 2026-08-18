#include <stdio.h>
#include <locale.h>

	main(){
		setlocale(LC_ALL,"portuguese_Brazil");

		char ch;
		ch = getchar();
		if (ch == 'p')
		printf ("você pressionou a tecla p");
	}