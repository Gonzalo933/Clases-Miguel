#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define M 3

void ProdMat(int matriz1[][M],int matriz2[][M],int resultado[][M]);

void main(int argc, char* argv[]){

	int matriz1[M][M];
	int matriz2[M][M];
	int resultado[M][M];
	
	int i,j;
	//Pedir matrices
	printf("Introduce matriz 1\n");
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			printf("Elemento: ");
			scanf("%d",&matriz1[i][j]);
		}
	}
	printf("Introduce matriz 2\n");
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			printf("Elemento: ");
			scanf("%d",&matriz2[i][j]);
		}
	}
	//Llamada funcion
	ProdMat(matriz1,matriz2,resultado);
	printf("Matriz Producto:\n");
	for(i=0;i<M;i++){
		printf("\n");
		for(j=0;j<M;j++){
			printf("%d\t",resultado[i][j]);			
		}
	}
	
}

void ProdMat(int matriz1[][M],int matriz2[][M],int resultado[][M]){
	int i,j,k;
	int suma;
	for(i=0; i<M; ++i){
		for(j=0; j<M; ++j){
			suma=0;
			for(k=0; k<M; ++k){
                suma= suma + matriz1[i][k]*matriz2[k][j];
            }
			resultado[i][j] = suma;
		}
	}
	return;		
	
}


