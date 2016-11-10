#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define M 3

void DibujarArbol(int n);
void main(int argc, char* argv[]){


DibujarArbol(4);
	
}

void DibujarArbol(int n){

	int i;
	int esp;
	int iguales;
	for(i=0; i< n ; i ++){ // Este bucle se repite una vez por cada fila del arbol

		for(esp = n - i -1 ; esp > 0 ; esp --){ //Dibujamos los espacios antes del asterisco
			printf(" ");
		}
		printf("*");
		for(iguales = 0 ; iguales < 2*i-1; iguales++){ //Dibujamos el numero de iguales en cada fila
			printf("=");
		}
		if(i == 0){ // En el caso de estar en la primera fila ( i = 0 ) simplemente dibujamos un salto de linea, en el resto, dibujamos un asterisco y el salto
			printf("\n");
		}else{
			printf("*\n");
		}
	}

}


