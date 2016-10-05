#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM 100

void Leer(double vec[],int n);
void Mostrar(double array[],int n);
double ProductoEscalar(double vec1[],double vec2[],int n);
void Multiplicar(double vec[],double escalar,int n);
void SumarVectores(double vec1[], double vec2[], double vec_suma[], int n);

void main(int argc, char* argv[]){
	double vector1[TAM];
	double vector2[TAM];
	double vector_suma[TAM];
	int tamano;
	double resultadoEscalar,x;
	
	do{
		printf("Que dimension de vector quieres usar?\n");
		scanf("%d",&tamano);
		if(tamano > TAM)
			printf("Error, dimension no valida.\n");
	}while(tamano > TAM);
	
	Leer(vector1,tamano);	
	Leer(vector2,tamano);	
	Mostrar(vector1,tamano);
	Mostrar(vector2,tamano);
	
	resultadoEscalar=ProductoEscalar(vector1,vector2,tamano);
	
	printf("Producto Escalar: %lf\n",resultadoEscalar);
	printf("Valor de X: \n");
	scanf("%lf",&x);
	
	Multiplicar(vector1,x,tamano);
	printf("Multiplicacion:\n");
	Mostrar(vector1,tamano);
	
	SumarVectores(vector1, vector1, vector_suma, tamano);
	printf("Suma:\n");
	Mostrar(vector_suma,tamano);
	
}
void SumarVectores(double vec1[], double vec2[], double vec_suma[], int n){
	int i;
	
	for(i=0;i<n;i++){
		vec_suma[i]=vec1[i] +vec2[i];
	}
	return;
}


void Multiplicar(double vec[],double escalar,int n){
	int i;
	
	for(i=0;i<n;i++){
		vec[i] = vec[i] * escalar;
	}
	return;	
}



double ProductoEscalar(double vec1[],double vec2[],int n){
	int i;
	double pe=0;
	
	for(i=0;i<n;i++){
		pe= pe + vec1[i] * vec2[i] ;
	}
	return pe;
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
	printf("Vector: \n");
	for(i=0; i< n; i++){
		printf("%lf ",array[i]);
	}
	printf("\n");
	return;
}	
	