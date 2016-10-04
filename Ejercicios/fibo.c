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
printf("resultado: %d \n",fibonacci(numero));

return;

	
}

int fibonacci(int n){
	int anterior1, anterior2;
	int actual;
	int i;

	anterior1 = 1;
	anterior2 = 0;
	actual = 0;

	for(i=1; i< n; i++){
		actual= anterior1 + anterior2;
	
		anterior2= anterior1;

		anterior1= actual;

	}
	return actual;

}