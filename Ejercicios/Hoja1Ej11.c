#include <stdio.h>
#include <stdlib.h>


void main(int argc, char* argv[]){

	int min,max;
	int cuadrado;
	printf("Valor min: \n");
	scanf("%d",&min);
	printf("Valor max: \n");
	scanf("%d",&max);

	printf("     x      x*x\n");
	printf("---------------------\n");

	while(min <= max){
		cuadrado = min * min;
		printf("%d\t%d\n",min,cuadrado);
		min ++;
	}

	return;
}