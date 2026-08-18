#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	main()
	{
		setlocale(LC_ALL,"portuguese_Brazil");

		if (getchar () == 'p')
			printf("Você digitou p");
		else
		 printf("Você não digitou p");
	}