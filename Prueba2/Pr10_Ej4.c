#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define M 20

typedef struct{
	double radio;
	double distancia;
}T_DAT;

typedef struct{
	char nombre[M];
	T_DAT dato;
}T_PLAN;

void Leer2(T_PLAN* pplaneta);
void Mostrar(T_PLAN *planeta);
void LeerPlanetas2(T_PLAN* planetas,int n);
int BuscaNombre(T_PLAN v[],int n,char nom[]);
void BuscarCercano(T_PLAN v[],int n,T_PLAN *p_cercano);

int main(void){
	T_PLAN *planetas;
	int tam;
	char nombre_planeta[M];
	int posicion_planeta;
	
	T_PLAN *planeta_mas_cercano;
	
	
	printf("\nIntroduce el numero de planetas: ");	
	scanf("%d",&tam);	
	planetas=(T_PLAN*)calloc(tam,sizeof(T_PLAN));
	LeerPlanetas2(planetas,tam);
	printf("\nIntroduzca el nombre de un planeta:");
	fflush(stdin);
	fgets(nombre_planeta,M,stdin);
	posicion_planeta=BuscaNombre(planetas,tam,nombre_planeta);
	if(posicion_planeta==-1){
		printf("\nERROR, planeta no encontrado");
	}else{
		Mostrar(&(planetas[posicion_planeta]));
	}
	//planeta_mas_cercano = (T_PLAN *) calloc(1,sizeof(T_PLAN));
	BuscarCercano(planetas,tam,planeta_mas_cercano);	
	printf("\n\nEl planeta mas cercano es :");
	printf("\nPrueba: %s \n", planeta_mas_cercano->nombre);
	printf("\nPrueba: %s \n", (*planeta_mas_cercano).nombre);
	printf("\nPrueba: %s \n", planetas[0].nombre);
	Mostrar(planeta_mas_cercano);
	free (planetas);
	return 0;
}
void Leer2(T_PLAN* pplaneta){
	//int l;
	printf("\nIntroduce el nombre del planeta: ");
	fflush(stdin);
	fgets(pplaneta->nombre,M,stdin);
	printf("\nIntroduce el radio del planeta: ");
	scanf("%lf",&(pplaneta->dato.radio));
	printf("\nIntroduce la distancia al sol: ");
	scanf("%lf",&(pplaneta->dato.distancia));
	return;
}

void LeerPlanetas2(T_PLAN* planetas,int n){
	int i;
	for(i=0;i<n;i++){
		Leer2(&planetas[i]);
	}
	return;
}

void Mostrar(T_PLAN *planeta){
	int l;
	l=strlen(planeta->nombre);
	if(planeta->nombre[l-1]=='\n'){
		planeta->nombre[l-1]='\0';
	}	
	printf("\nEl nombre del planeta es: %s",planeta->nombre);	
	printf("\nSu radio es %f",planeta->dato.radio);
	printf("\nSu distancia al sol es %f",planeta->dato.distancia);
	return;
}
int BuscaNombre(T_PLAN v[],int n,char nom[]){
	int i;
	for(i=0;i<n;i++){
		if(strcmp(v[i].nombre,nom)==0){
			return i;
		}
	}
	return -1;//si no ha encontrado el planeta se sale del bucle y devuelve -1
}
void BuscarCercano(T_PLAN v[],int n,T_PLAN *p_cercano){
	int i;
	double dist_minima;
	dist_minima=v[0]->dato.distancia;//distancia  minima inicial y apartir de ella comparar las siguientes
	p_cercano=(v[0]);
	//printf("\nEl nombre del planeta es: %s\n",v[0].nombre);
	//printf("\nEl nombre del planeta es: %s\n",p_cercano->nombre);
	for(i=0;i<n;i++){
		if(v[i]->dato.distancia < dist_minima){
			dist_minima=v[i]->dato.distancia;
			p_cercano=(v[i]);//apunte al planeta de menor distancoia al Sol			
		}
	}
	printf("\nPrueba: %s \n", p_cercano->nombre);	
	return;	
}