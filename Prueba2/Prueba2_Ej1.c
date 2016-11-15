#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 1000
#define COL 2

void Rellenar_mat(int matriz[][COL], int num);
void Mostrar(int matriz[][COL], int num);
void Reordenar(int matriz[][COL],int num);
void AltaCalidad(int matriz[][COL], int num,float *media, float *num_por_encima);
void Rellenar_AltaCalidad(int matriz[][COL], int num,float media,int vehiculos_alta_c[][COL]);


// http://stackoverflow.com/questions/13554244/how-to-use-pointer-expressions-to-access-elements-of-a-two-dimensional-array-in

void main(int argc, char* argv[]){
	int matriz[M][COL]; //Una fila por vehiculo, una columna para la nota y otra para el num bastidor
	int num_vehiculos;
	
	int vehiculos_alta_calidad[][COL];
	
	float media;
	float num_por_encima;
	
	int i;
	
	printf("Numero de vehiculos fabricados?: \n");
	scanf("%d",&num_vehiculos);
	Rellenar_mat(matriz,num_vehiculos);
	//Reordenar(matriz,num_vehiculos);	
	Mostrar(matriz,num_vehiculos);
	
	AltaCalidad(matriz,num_vehiculos,&media, &num_por_encima);
	vehiculos_alta_calidad = (int **)calloc(num_por_encima, sizeof(int *));
	//Comprobar == NULL
	Rellenar_AltaCalidad(matriz,num_vehiculos,media,vehiculos_alta_calidad);
	printf("Vehiculos alta calidad.\n");
	Mostrar(vehiculos_alta_calidad, num_por_encima);
	
	for(i=0;i<num_por_encima;i++){
		free(vehiculos_alta_calidad[i]);
	}	
	free(vehiculos_alta_calidad);
}


void Rellenar_mat(int matriz[][COL], int num){
	int i;
	printf("Se deben introducir los vehiculos con el numero de bastidor en orden decreciente.\n");
	for(i=0; i< num ; i++){
		printf("Calidad del vehiculo %d ?:\n",i+1);
		scanf("%d",&matriz[i][0]);
		printf("Numero de bastidor del vehiculo %d ?:\n",i+1);
		scanf("%d",&matriz[i][1]);		
	}	
	return;
}

void Reordenar(int matriz[][COL],int num){
	int i,k;
	int *puntero;
	for(i=0, k= num-1; i != k ; i++, k--){
		puntero = matriz[i];			
		(matriz[i]) = (matriz[k]);
		(matriz[k]) = puntero;
	}
	return;
}

void Mostrar(int matriz[][COL], int num){
	int i;
	printf("Matriz:\nCalidad\tBastidor\n");
	for(i=0; i< num ; i++){
		printf("%d\t%d\n",matriz[i][0],matriz[i][1]);
	}	
	return;
}

void AltaCalidad(int matriz[][COL], int num,float *media, float *num_por_encima){
	int i;
	float suma=0;	
	for(i=0; i < num ; i++){
		suma = suma + matriz[i][0];
	}	
	*media = suma / num;
	for(i=0; i < num ; i++){
		if(matriz[i][0] > (*media)){
			(*num_por_encima) = (*num_por_encima) + 1;
		}
	}	
	return;	
}

void Rellenar_AltaCalidad(int matriz[][COL], int num,float media,int vehiculos_alta_c[][COL]){
	int i;
	int k = 0;
	for(i=0; i < num ; i++){
		if(matriz[i][0] > media){
			vehiculos_alta_c[k] = matriz[i];
			k++;
		}
	}	
	return;
}