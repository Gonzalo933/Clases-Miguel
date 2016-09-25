#include <stdio.h>
#include <stdlib.h>

int factorial(int numero);

void main(int argc, char* argv[]){

	
	int numero;
	
	printf("introduce un numero: \n");
	scanf("%d",&numero);	
	
	
	printf("El factorial de %d es %d\n",numero,factorial(numero));

	return;
}

int factorial(int numero){
	int res;
	if(numero == 1)
		return 1;
	
	res	= numero * factorial(numero - 1);
	return res;
}