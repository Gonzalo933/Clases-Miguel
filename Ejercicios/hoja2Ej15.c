#include <stdio.h>
#include <stdlib.h>

//Declaraciones de funciones, para que puedan estar en cualquier lado
void DibujarTriangulo(int altura);

void DibujarLinea(int maximo_num);
void DibujarTriangulo(int altura);

void main(int argc, char* argv[]){

	int altura;
	printf("Introduce la altura del triangulo: \n");
	scanf("%d",&altura);

	printf("Triangulo:\n");

	DibujarTriangulo(altura);
	
return;
}



void DibujarTriangulo(int altura){
	int i;

	for(i=1; i<= altura-2; i++){
		DibujarLinea(i);
	}
	printf("\n");

	

}

void DibujarLinea(int maximo_num){
	int i;

	for(i=1; i<= maximo_num; i++){
		printf("%d",i);
	}
	printf("\n");


	return;
}