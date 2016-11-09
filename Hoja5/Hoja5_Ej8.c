#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 10

void BuscarValores(float vec[M], float * max, float *min, float * medio);

void main(int argc, char* argv[]){

	float max,min,medio;
	float vec[M];

	printf("Introduce Valores: \n");
	for(i=0; i < M ; i++){	
		scanf("%f",&vec[i]);
	}

	BuscarValores(vec, &max, &min,&medio);

	printf("Minimo: %f, Maximo: %f , Media : %f\n",min,max,medio);

}

void BuscarValores(float vec[M], float * max, float *min, float * medio){

	int i;	
	*max = vec[0];
	*min = vec[0];
	*medio = 0;
	float suma = 0;
	
	for(i=0; i < M ; i++){	
		if(vec[i] > *max){
			*max = vec[i];
		}
		if(vec[i] < * min){
			*min = vec[i];
		}
		suma = suma + vec[i];		
	}
	
	*medio = suma/M;
	
}


