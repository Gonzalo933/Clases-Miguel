#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define M 20

typedef struct{
	int codigo;
	int unidades;
	float precio;
}T_OPERACION;

int ContarOperaciones(FILE *pf);
int BuscarOperacionUnidadesMaxima(T_OPERACION v[],int num_operaciones);
void CargarVec(FILE *pf,T_OPERACION v[]);
void BuscarOperacionImporteMaximo(T_OPERACION v[], int num_operaciones,T_OPERACION *op);

int main(void){
	T_OPERACION * operaciones;
	int num_operaciones;
	T_OPERACION op;
	FILE * pf;
	int indice;
	pf = fopen("ventas.txt", "r");
	if(pf == NULL){
		printf("Error al abrir fichero.\n");
		return 0;
	}
	num_operaciones = ContarOperaciones(pf);
	operaciones= (T_OPERACION *)calloc(num_operaciones,sizeof(T_OPERACION));
	if(operaciones == NULL){
		printf("Error, reserva de memoria.\n");
		return 0;
	}

	fclose(pf);
	pf = fopen("ventas.txt", "r");
	if(pf == NULL){
		printf("Error al abrir fichero.\n");
		return 0;
	}
	CargarVec(pf,operaciones);

	BuscarOperacionImporteMaximo(operaciones,num_operaciones,&op);
	printf("Operacion de importe maximo:\n");
	printf("%d %d %f\n", op.codigo, op.unidades,op.precio);

	indice = BuscarOperacionUnidadesMaxima(operaciones,num_operaciones);
	printf("Operacion con numero unidades maximo:\n");
	printf("%d %d %f \n",operaciones[indice].codigo,operaciones[indice].unidades,operaciones[indice].precio);
	
	return 0;
}


int ContarOperaciones(FILE *pf){
	int ctrl;
	T_OPERACION p;
	int num_operaciones=0;

	do{
		ctrl=fscanf(pf,"%d%d%f",&(p.codigo),&(p.unidades),&(p.precio));
		if(ctrl == 3){
			num_operaciones ++;
		}
	}while(ctrl == 3);

	return num_operaciones;
}

void CargarVec(FILE *pf,T_OPERACION v[]){
	int i;
	int ctrl;
	i=0;
	do{
		ctrl=fscanf(pf,"%d%d%f",&(v[i].codigo),&(v[i].unidades),&(v[i].precio));
		if(ctrl == 3){
			i++; //Aumentamos la posicion en la que se guardara la siguiente operacion en el vector v.
		}
	}while(ctrl == 3);
	return;
}

void BuscarOperacionImporteMaximo(T_OPERACION v[], int num_operaciones,T_OPERACION *op){
	int i;
	float maximo=-1;
	for(i=0;i<num_operaciones; i++){
		if(v[i].precio > maximo){
			maximo=v[i].precio;
			*op = v[i];
		}
	}
	return;
}

int BuscarOperacionUnidadesMaxima(T_OPERACION v[],int num_operaciones){
	int indice_maximo = -1;
	int i;
	int unidades = -1;
	for(i=0;i<num_operaciones; i++){
		if(v[i].unidades > unidades){
			unidades = v[i].unidades;
			indice_maximo = i;
		}
	}
	return indice_maximo;
}