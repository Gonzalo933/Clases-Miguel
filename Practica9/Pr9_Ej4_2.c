#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define M 3

void main(int argc, char* argv[]){

	int matriz1[M][M];
	int matriz2[M][M];
	int resultado[M][M];
	
	//Pedir matrices
	
	//Llamada funcion
	
}

void ProdMat(int **matriz1,int **matriz2,int **resultado){
	int i,j,k;
	
	for(i=0; i<M; ++i)
		for(j=0; j<M; ++j)
			for(k=0; k<M; ++k){
                resultado[i][j]+=matriz1[i][k]*matriz2[k][j];
            }
	
}


