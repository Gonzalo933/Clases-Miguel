#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 100

int RellenarCreciente(int vector[]);
int Insertar(int vector[],int codigo,int * tamano_actual);
int Eliminar(int vector[],int codigo,int * tamano_actual);
void Mostrar(int vector[],int tamano_actual);

void main(int argc, char* argv[]){

	int vector[MAX];
	int tamano_actual;
	int opcion,codigo_buscar;
	int resultado;


	tamano_actual= RellenarCreciente(vector);

	do{
		printf("\nMenu:\n");
		printf("1.Eliminar.\n");
		printf("2.Insertar.\n");
		printf("3.Salir\n");
		scanf("%d",&opcion);

		switch(opcion){
			case 1:
				printf("Introduce el codigo a eliminar.\n");
				scanf("%d",&codigo_buscar);
				resultado = Eliminar(vector,codigo_buscar,&tamano_actual);
			break;
			case 2:
				printf("Introduce el codigo a insertar.\n");
				scanf("%d",&codigo_buscar);
				resultado = Insertar(vector,codigo_buscar,&tamano_actual);
			break;
		}
		if(resultado == 1 && opcion != 3){
			Mostrar(vector,tamano_actual);
		}else{
			printf("Error.\n");
		}


	}while(opcion != 3);

	return;
	
}


int Insertar(int vector[],int codigo,int * tamano_actual){
	int i;
	int posicion_econtrada;

	posicion_econtrada = *tamano_actual;

	for(i=0;i<(*tamano_actual);i++){ //Recorremos el vector buscando la posicion en la que insertaremos
		if(vector[i] == codigo){
			return 0; //Si el codigo ya esta en el vector, devolvemos Error.
		}
		if(vector[i] > codigo){
			posicion_econtrada = i; //Si la posicion actual es mayor que el codigo, el codigo ira en esa posicion
		}
	}
	*tamano_actual = *tamano_actual + 1; 

	for(i=posicion_econtrada;i<(*tamano_actual);i++){
		vector[i+1] = vector[i]; //Se mueven todos los elementos del vector una posicion a la derecha.
	}
	vector[posicion_econtrada] = codigo; //Insertamos el nuevo codigo en la posicion que marcamos antes.

	return 1;

}



int Eliminar(int vector[],int codigo,int * tamano_actual){
	int i;
	int posicion_econtrada;
	posicion_econtrada = -1;
	for(i=0;i<(*tamano_actual);i++){
		if(vector[i] == codigo){
			posicion_econtrada= i; //Posicion marcada para eliminar
		}
	}

	if(posicion_econtrada == -1){ //No hemos encontrado el codigo.
		return 0;
	}

	*tamano_actual = *tamano_actual -1;
	for(i=posicion_econtrada;i<(*tamano_actual);i++){
		vector[i] = vector[i+1];
	}

	return 1;

}
void Mostrar(int vector[],int tamano_actual){
	int i;
	for(i=0;i<tamano_actual;i++){
		printf("%d  ",vector[i]);
	}
	printf("\n");
	return;

}
int RellenarCreciente(int vector[]){

	int tamano_actual;
	int i;
	tamano_actual = 0;
	printf("Cuantos elementos a insertar?:\n");
	scanf("%d",&tamano_actual);

	for(i=0;i<tamano_actual;i++){
		printf("\nElemento:");
		scanf("%d",&vector[i]);
	}
	return tamano_actual;
}

