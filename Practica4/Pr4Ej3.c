#include <stdio.h>
#include <stdlib.h>

//Declaraciones de funciones, para que puedan estar en cualquier lado
void DibujarTriangulo(int altura);
void DibujarLinea(int num_asteriscos);


void main(int argc, char* argv[]){

int altura;
printf("Introduce la altura del triangulo: \n");
scanf("%d",&altura);

printf("Triangulo:\n");

DibujarTriangulo(altura);

return;
}

void DibujarTriangulo(int altura){
	int numero_asteriscos;
	
	for(numero_asteriscos=altura;numero_asteriscos > 0 ; numero_asteriscos --){
		DibujarLinea(numero_asteriscos);
	}
	return;
}

void DibujarLinea(int num_asteriscos){
	int contador;
	
	for(contador=0;contador < num_asteriscos ; contador ++){
		printf("*");
	}
	printf("\n");
	
	return;
}