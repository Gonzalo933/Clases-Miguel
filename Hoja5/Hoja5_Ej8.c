#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 10

int numero_repeticiones_palabra(char frase[], char palabra[]);
void main(int argc, char* argv[]){

	/*El main no lo piden en el enuciado, pero he hecho uno de prueba
	*/
	char frase[]="la casala de la hermlaana de la cuñada de mi primo la";
	char palabra[]="la";
	
	printf("La palabra LA, se repite: %d veces",numero_repeticiones_palabra(frase,palabra));
	
}

int numero_repeticiones_palabra(char frase[], char palabra[]){
	int num_veces =0;
	int i,k;
	int longitud_frase = strlen(frase);
	int longitud_palabra = strlen(palabra);
	for(i=0; i < longitud_frase; i++){
		k=0;
		if(frase[i] == palabra[k]){ //Si la letra de la frase coincide con la primera d ela palabra, empezamos a contar e ir avanzando letras a ver si coinciden.
			while(frase[i] == palabra[k]){
				k++;
				i++;
			}
			if(k == longitud_palabra && (frase[i] == ' ' || frase[i] == '\0')){
				num_veces ++;
			}
		}	
	}
 
    return num_veces;
}


