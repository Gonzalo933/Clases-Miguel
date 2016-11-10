#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

void Contar(double original[], int * veces);
void Comprimir(double orig[], int co[], int ncc);

void main(int argc, char* argv[]){

	double original[N];
	int veces=0;
	int i;
	int *co;
	
	for(i=0;i<N;i++){
		printf("valor senal:");
		scanf("%lf",&original[i]);
	}		
	Contar(original, &veces);
	co=(int *)calloc(veces,sizeof(int));
	if(co == NULL){
		printf("Error");
		return;
	}
	Comprimir(original, co,  veces)	;
	printf("Veces: %d\n",veces);
	printf("senal comprimida:\n");
	for(i=0;i < veces ; i++){
		printf("%d ",co[i]);
	}
	
	return;
}

void Contar(double original[], int * veces){
	
	double ultimo=original[0];
	int i;
	*veces = 0;
	
	//Debemos contar el numero de veces que la señal pasa por 0, para ello
	//si tenemos estos valores [ -5 , 7 , 8 ,15 , -2] se observa que la señal ha pasado por 0 dos veces.
	// por tanto lo que tenemos que hacer es guardar el anterior valor de la señal y comprobar si el nuevo es de distinto signo.
	for(i=0;i < N ; i++){		
		if(ultimo < 0 && original[i] > 0){			
			*veces = *veces + 1;
		}else if(ultimo > 0 && original[i] < 0){
			*veces = *veces + 1;
		}
		ultimo= original[i];
	}
	return;
}

void Comprimir(double orig[], int co[], int ncc){

	int i;
	int k;
	double ultimo=orig[0];
	int indice=0;
	k=0;
	for(i=0; i < N; i++){
		if(ultimo < 0 && orig[i] > 0){			
			co[k] = i - indice;
			indice = i;
			k++;
		}else if(ultimo > 0 && orig[i] < 0){
			co[k] = i - indice;
			indice = i;
			k++;
		}
		
	}
}

