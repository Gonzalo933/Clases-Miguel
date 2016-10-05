#include <stdio.h>
#include <stdlib.h>


void main(int argc, char* argv[]){

	int numero;
	int num_iteraciones;
	do{
		printf("introduce un numero: \n");
		scanf("%d",&numero);	
		if(numero < 0){ //Comprobar positivo
			printf("El numero debe ser positivo.\n");
		}
	}while(numero < 0);
	
	printf("Valor inicial: %d\n",numero);
	
	for(num_iteraciones = 0; numero > 1; num_iteraciones ++){
		//Si el numero es par....
		if(numero % 2 == 0){
			numero = numero / 2;	
		}else{
			numero = numero * 3 + 1;
		}	
		printf("Siguiente valor: %d\n",numero);
	}

	printf("Valor final: %d, numero de iteraciones: %d\n",numero,num_iteraciones);


	return;
}