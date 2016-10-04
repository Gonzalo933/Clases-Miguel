#include <stdio.h>
#include <stdlib.h>

/*

CALCULA LA LISTA DE NUMEROS PRIMOS HASTA EL NUMERO INTRODUCIDO

*/
int primo(int numero);
void main(){

int numero;

printf("Introduce numero: \n");
scanf("%d",&numero);
printf("resultado: %d \n",factorial(numero));

return;

	
}

int factorial(int n){
int i;
int acumulador=1; //Caso base Factorial (1) = 1

for(i = n ; i> 1 ; i --){
	acumulador = acumulador * i;

}
return acumulador;
}