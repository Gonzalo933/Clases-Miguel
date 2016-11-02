#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//EXPLICAR ESTE INCLUDE
#include <string.h>


#define TAM 10


void CombinacionSecreta(int numeros[],int maximo);
int ComprobarIntento(int intento[],int numeros[],int maximo);
void main(int argc, char* argv[]){

int maximo;
int numeros[TAM];
int intento[TAM];
int res;
int i;
srand((unsigned int) time(NULL));

printf("Con cuantos numeros te atreves");
scanf("%d",&maximo); //do while validacion

CombinacionSecreta(numeros,maximo);
do {
	printf("Intento:\n");
	for(i=0;i<maximo; i++){
		scanf("%d",&intento[i]);
	}
	
	res=ComprobarIntento(intento, numeros, maximo);
}while(res != maximo);
printf("Has ganado.");

}

void CombinacionSecreta(int numeros[],int maximo){
int i;

for(i=0;i<maximo; i++){
	numeros[i] = rand() % 10;
}
return;
}

int ComprobarIntento(int intento[],int numeros[],int maximo){
	int i;
	int j;
	int verde=0;
	int amarillo=0;
	for(i=0;i<maximo; i++){
		for(j=0;j<maximo; j++){
			if(numeros[i] == intento[j] && j == i){
				verde ++ ;
			}else if(numeros[i] == intento[j]){
				amarillo ++;
			}
		}
	}
	printf("%d verdes, %d amarillos\n", verde,amarillo);
	return verde;
}