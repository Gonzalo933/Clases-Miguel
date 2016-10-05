#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM 50

//BUSCAR DOCUMENTACION DE LA FUNCION fgets online y aplicarla al ejercicio.
void main(int argc, char* argv[]){

	char cadena[TAM];
	char nueva[TAM];
	int i;
	
	gets(cadena);
	
	for(i = 0 ; i < TAM ; i++){
		if(cadena[i] >= '0' && cadena[i] <= '9'){
			nueva[i] = '&';
		}else if(cadena[i] >= 'a' && cadena[i] <= 'z'){ //Si es minuscula pasar a mayuscula
			nueva[i] = cadena[i] - ('a' - 'A');
		}else if(cadena[i] >= 'A' && cadena[i] <= 'Z'){
			nueva[i] = cadena[i] + ('a' - 'A');
		}else{
			nueva[i] = cadena[i];
		}	

	}
	printf("Original: %s\n  Nueva: %s \n",cadena,nueva);
}