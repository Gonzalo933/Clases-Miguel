#include <stdio.h>
#include <math.h>

#define TAMVECTOR 20

void imprimir_vector(int vector[],int tamano);
int es_primo(int numero);

int main(void)
{
	int vector[TAMVECTOR];
	int i;

	for(i=1; i < TAMVECTOR; i++){  //Rellenar el vector con los numero primos
		vector[i] = es_primo(i);
	}

	for(i=1; i < TAMVECTOR; i++){ 
		printf("%d\t%d\n", i, vector[i]);
	}

	return;

}	
	
void imprimir_vector(int vector[],int tamano){
	int i;
	for(i=0; i< tamano; i++){
		printf("%d ",vector[i]);
	}
	printf("\n");
	return;
}	
	
int es_primo(int numero){
	int i;
	int primo=1;
	for(i=2;i<numero && primo == 1;i++){
		if(numero % i == 0){ //Si es divisible por algun numero a partir de 2 es que el numero no es primo.
			primo=0;			
		}
	}

	return primo;
}