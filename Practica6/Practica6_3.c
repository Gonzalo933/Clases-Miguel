#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM 100

void Leer(double vec[],int n);
void Mostrar(double array[],int n);

void main(int argc, char* argv[]){
	double vector1[TAM];
	double vector2[TAM];
	double vector_suma[TAM];
	int tamano;
	do{
		printf("Que dimension de vector quieres usar?\n");
		scanf("%d",&tamano);
		if(tamano > TAM)
			printf("Error, dimension no valida.\n");
	}while(tamano > TAM);
	
	Leer(vector1,tamano);	
	Mostrar(vector1,tamano);
	
	
}

void Leer(double vec[],int n){

	int i;
	printf("Introduce los valores del vector: \n");
	for(i=0;i<n;i++){
		printf("valor %d: \n",i);
		scanf("%lf",&vec[i]);
	}
	return;
}

	
void Mostrar(double array[],int n){
	int i;
	for(i=0; i< n; i++){
		printf("%lf ",array[i]);
	}
	printf("\n");
	return;
}	
	