#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int subRotina1(int seg, int *h, int *m, int *s)
{		
	*h = seg/3600;
	seg = seg % 3600;
	
	*m = seg/60;
	*s = seg%60;
}
//--------------------------