#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//EXPLICAR ESTE INCLUDE
#include <string.h>


#define TAM 100

void EliminaVoc(char cad_ini[], char cad_fin[]);
void EliminaVoc2(char cad_ini_fin[]);
void main(int argc, char* argv[]){
	char cadena[TAM];
	char cadena_final[TAM];
	
	
	printf("Introduce una cadena: \n");
	fgets(cadena, TAM, stdin);
	EliminaVoc(cadena,cadena_final);
	printf("%s\n",cadena_final);
	return;
}

void EliminaVoc(char cad_ini[], char cad_fin[]){
	size_t tamano_cadena;
	int i;
	int k;
	
	tamano_cadena=strlen(cad_ini);	
	for(i=0,k=0;i<tamano_cadena;i++){
		if(cad_ini[i] >= 'a' && cad_ini[i] <= 'z'){ //En caso de que sea vocal no hacer nada
		
		}else{
			cad_fin[k] = cad_ini[i];
			k++;
		}	
		//Seria mucho mejor con la condicion negada para que no haya else... pero a lo mejor es mas lio
	}
	return;
}
void EliminaVoc2(char cad_ini_fin[]){
	size_t tamano_cadena;
	int i;
	int k;
	
	tamano_cadena=strlen(cad_ini_fin);	
	for(i=0,k=0;i<tamano_cadena;i++){
		if(cad_ini_fin[i] >= 'a' && cad_ini_fin[i] <= 'z'){ //En caso de que sea vocal no hacer nada
		
		}else{
			cad_ini_fin[k] = cad_ini_fin[i];
			k++;
		}	
		//Seria mucho mejor con la condicion negada para que no haya else... pero a lo mejor es mas lio
	}
	return;
}