#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int primo(int n);

void main(int argc, char* argv[]){

	int numero;
	int i;
	int k;
	int numeros[100];
	int vec_primos[100];
	time_t t;

	srand(time(NULL));

	do{
		printf("Introduce un numero.\n");
		scanf("%d",&numero);
		if(numero < 0 || numero > 100)
			printf("Error.\n");

	}while(numero < 0 || numero > 100);

	//Producir numeros aleatorios
	for(i = 0; i<numero; i++){
		numeros[i] = rand();
	}

	//Guardar los numeros primos en el vector vec_primos
	for(i = 0, k=0; i<numero; i++){
		if(primo(numeros[i]) == 1){
			vec_primos[k] = numeros[i];
			k++;
		}
	}
	printf("Numero Primos: %d\n",k);
	// imprimir todos los numeros primos
	for(i=0; i < k; i++){
		printf("%d ",vec_primos[i]);
	}
	printf("\n");
}

int primo(int n){
	int i;
	int es_primo = 1;
	if(n == 0) return 0;
	for(i=2;i < n && es_primo == 1;i++){
		if(n % i == 0){
			es_primo = 0;
		}		

	}
	return es_primo;
}