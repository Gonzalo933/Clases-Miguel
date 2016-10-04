#include <stdio.h>
#include <stdlib.h>

/*

CALCULA LA LISTA DE NUMEROS PRIMOS HASTA EL NUMERO INTRODUCIDO

*/
int primo(int numero);
void main(){

	int numero,res;
	int i;
	do{
		printf("Introduce un numero.\n");
		scanf("%d",&numero);

		if(numero <= 0)
			printf("Error.\n");

	}while(numero <= 0);

	
	for(i=2; i <= numero; i++){
		res = primo(i);
		if(res == 1){
			printf("%d\n",i);
		}

	}
}

int primo(int numero){
	int i;
	int es_primo = 1;

	for(i=2;i<numero && es_primo != 0;i++){
		if(numero % i == 0){
			es_primo = 0;
		}		

	}
	return es_primo;
}