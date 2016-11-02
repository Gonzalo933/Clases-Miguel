#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 100

void BuscarCaracter(char *frase1,char caracter,int *longitud);
void Transformar(char * frase1,char * frase2, char c);
void main(int argc, char* argv[]){


	char frase1[M];
	int longitud;
	char * frase2;
	char caracter;


	printf("Introduce la frase 1.\n");
	fgets(frase1, M, stdin);
	printf("Introduce un caracter:");
	scanf("%c",&caracter);
	BuscarCaracter(frase1,caracter,&longitud);
	frase2=(char *) calloc(longitud,sizeof(char));
	if(frase2 == NULL){
		printf("Error");
		return;
	}
	Transformar(frase1,frase2,caracter);
	printf("Frase 1: %s \n",frase1);
	printf("Frase 2: %s \n",frase2);
	free(frase2);
}

void BuscarCaracter(char *frase1,char caracter,int *longitud){
	int i;
	i=0;
	while(frase1[i] != '\0'){
		if(frase1[i] == caracter){
			*longitud = i+1;
		}
		i++;
	}
return;
}

void Transformar(char * frase1,char * frase2, char c){
	int i=0;

	while(frase1[i] != c){
		frase2[i]= frase1[i];
		i++;
	}
	frase2[i] = '\0';
	return;
}