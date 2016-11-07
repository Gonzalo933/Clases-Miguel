#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 100


void main(int argc, char* argv[]){

	
	int *vector;
	int tamano;
	
	printf("Introduce el tamano\n");
	scanf("%d",&tamano);
	

	vector=(int *) calloc(tamano,sizeof(int));
	if(vector == NULL){
		printf("Error");
		return;
	}

	
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
			*num_impares++;
		}
	}
	return;
}

void CopiaImpares(int *vector1, int* vector2, int tamano){
	int i;
	
	for(i=0;i<tamano;i++){
		if(vector1[i] % 2 != 0){
		//....
		}
	}

}
