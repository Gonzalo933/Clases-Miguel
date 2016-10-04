#include <stdio.h>
#include <stdlib.h>



int invertir(int numero);
void main(int argc, char* argv[]){

	int numero;

	printf("introduce un numero: \n");
	scanf("%d",&numero);	
	
	printf("Valor inicial: %d\n",numero);
	numero = invertir(numero);
	printf("Numero invertido: %d\n",numero);
	
	return;

}

int invertir(int numero){
	int inverso=0;
		while (numero > 0){
			inverso = (10*inverso) + numero%10;
			numero = numero / 10;
		}       
  return inverso;
}