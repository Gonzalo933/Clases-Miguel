#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//EXPLICAR ESTE INCLUDE
#include <string.h>


#define TAM 100

void EliminaVoc(char cad_ini[], char cad_fin[]);
void EliminaVoc2(char cad_ini_fin[]);


/* EJERCICIO: 
	Acabar esta funcion
	*/

int cuantas_vocales(char cadena[]);



void main(int argc, char* argv[]){
	char cadena[TAM];
	char cadena_final[TAM];
	
	
	printf("Introduce una cadena: \n");
	fgets(cadena, TAM, stdin);

	printf("Cadena leida: %s\n",cadena);
	printf("Cadena sin vocales, llamando a EliminaVoc1: \n");
	EliminaVoc(cadena,cadena_final);
	printf("%s\n",cadena_final);

	printf("Cadena sin vocales, llamando a EliminaVoc2.\n");
	EliminaVoc2(cadena);
	printf("%s\n",cadena);
	return;
}

void EliminaVoc(char cad_ini[], char cad_fin[]){
	size_t tamano_cadena;
	int i;
	int k;
	
	tamano_cadena=strlen(cad_ini);	
	for(i=0,k=0;i<tamano_cadena;i++){		
		if(cad_ini[i] == 'a' || cad_ini[i] == 'e' || cad_ini[i] == 'i' || cad_ini[i] == 'o' || cad_ini[i] == 'u'
		    || cad_ini[i] == 'A' || cad_ini[i] == 'E' || cad_ini[i] == 'I' || cad_ini[i] == 'O' || cad_ini[i] == 'U'){ 
		//En caso de que sea vocal no hacer nada



		}else{
			cad_fin[k] = cad_ini[i];
			k++;
		}	
		//Seria mucho mejor con la condicion negada para que no haya else... pero a lo mejor es mas lio
	}
	cad_fin[k] = '\0';
	return;
}
void EliminaVoc2(char cad_ini_fin[]){
	int tamano_cadena;
	int i;
	int k;
	
	tamano_cadena=strlen(cad_ini_fin);	
	for(i=0,k=0;i<tamano_cadena;i++){
		switch(cad_ini_fin[i]){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':

			break;


			default:
				cad_ini_fin[k] = cad_ini_fin[i];
				k++;
			break;

		}
	}
	cad_ini_fin[k] = '\0';
	return;
}