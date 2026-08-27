#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,x[2][3];
	
	x[0][0] = 4;
	x[0][1] = 4;
	x[0][2] = 4;

	
	x[1][0] = 4;
	x[1][1] = 4;
	x[1][2] = 4;

	




	
	for(i=0;i<2;i++){
		printf("Elementos da linha %d",i);
		for(j=0;j<3;j++){
			printf("\n%d\n",x[i][j]);
		}
	}
}