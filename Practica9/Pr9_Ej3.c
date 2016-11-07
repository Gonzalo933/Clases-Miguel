#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeerVec(int * vector,int tamano);
void ContarImpares(int *vector1, int tamano, int *num_impares);
void CopiaImpares(int *vector1, int* vector2, int num_impares);
void Mostrar(int * vector,int num_impares);

void main(int argc, char* argv[]){

	int * vector2;
	int *vector;
	int tamano;
	int num_impares;

	printf("Introduce el tamano\n");
	scanf("%d",&tamano);
	

	vector=(int *) calloc(tamano,sizeof(int));
	if(vector == NULL){
		printf("Error");
		return;
	}

	LeerVec(vector, tamano);
	ContarImpares(vector,tamano,&num_impares);

	vector2=(int *) calloc(num_impares,sizeof(int));
	if(vector2 == NULL){
		printf("Error");
		return;
	}

	CopiaImpares(vector,vector2,num_impares);
	printf("Numero de impares: %d \n El vector de numeros impares es: \n",num_impares);
	Mostrar(vector2,num_impares);
	free(vector);
}

void LeerVec(int * vector,int tamano){
	int i;
	
	for(i=0;i<tamano;i++){
		printf("Introduce el elemento: %d\n",i+1);
		scanf("%d",&vector[i]);
	}
	return;
}

void ContarImpares(int *vector1, int tamano, int *num_impares){
	int i;
	*num_impares = 0;
	for(i=0;i<tamano;i++){
		if(vector1[i] % 2 != 0){
			*num_impares = *num_impares +1;
		}
	}
	return;
}

void CopiaImpares(int *vector1, int* vector2, int num_impares){
	int i;
	int k;
	k=0;
	for(i=0;k != num_impares;i++){
		if(vector1[i] % 2 != 0){
		 vector2[k] = vector1[i];
		 k++;
		}
	}
	return;
}

void Mostrar(int * vector, int num_impares){
	int i;
	
	for(i=0;i<num_impares;i++){
		printf("%d  ",vector[i]);
	}
	printf("\n");
	return;
}