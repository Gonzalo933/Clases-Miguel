#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define M 5 //Numero alumnos
#define N 3 //Numero asignaturas
#define K 30 //Tamaño maximo del nombre

void CargarAsignaturas(char Asignaturas[][K]);
void CargarAlumnos(char Alumnos[][K]);
void CargarMatriz(float Notas[][N], char Asignaturas[][K], char Alumnos[][K]);
void PromedioAlumno(float Notas[][N], float Promedio[]);
float PromedioAsignatura(float Notas[][N], int n);

void main(int argc, char* argv[]){

	float notas[M][N];
	char asignatura[N][K];
	char alumnos[M][K];
	
	float promedio[M];
	int alumno, asig,i;
	int promedio_asig;
	
	printf("Carga de Asignaturas\n");
	printf("--------------------------\n");
	CargarAsignaturas(asignatura);
	
	printf("Carga de Alumnos\n");
	printf("--------------------------\n");
	CargarAlumnos(alumnos);
	
	
	printf("Carga de Notas\n");
	printf("--------------------------\n");
	CargarMatriz(notas,asignatura,alumnos);
	
	printf("Alumnos y notas\n");
	printf("--------------------------\n");
	
	for(alumno=0; alumno< M ; alumno++){
		printf("\nAlumno: %s", alumnos[alumno]);
		for(asig=0; asig< N ; asig++){		
			printf("\n\t%s\t%.2f",asignatura[asig],notas[alumno][asig]);
		}
	}
	printf("\nPromedio de notas por alumno\n");
	printf("--------------------------\n");
	PromedioAlumno(notas,promedio);
	for(alumno=0; alumno< M ; alumno++){
		printf("\n%s: %.2f", alumnos[alumno],promedio[alumno]);
	}
	
	printf("\nIntroduzca el numero de asignatura de la que desea obtener el promedio:");
	scanf("%d",&promedio_asig);
	promedio_asig --; //Se le resta uno porque la asignatura 1 en realidad esta guardada en la posicion 0 del array.
	printf("\nLa media de la asignatura %s es %2.f\n",asignatura[promedio_asig],PromedioAsignatura(notas,promedio_asig));
	
	return;
	
}

void CargarAsignaturas(char Asignaturas[][K]){
	
	int i;	
	for(i=0; i< N ; i++){
		printf("Introduce el nombre de la asignatura %d: \n",i+1);
		scanf("%s",Asignaturas[i]);
		//fgets(Asignaturas[i], K, stdin);
	}
	return;
}

void CargarAlumnos(char Alumnos[][K]){
	int i;	
	for(i=0; i< M ; i++){
		printf("Introduce el nombre del alumno %d: \n",i+1);
		scanf("%s",Alumnos[i]);
		//fgets(Alumnos[i], K, stdin);
	}
	return;
}

void CargarMatriz(float Notas[][N], char Asignaturas[][K], char Alumnos[][K]){
	int alumno, asig;	
	for(alumno=0; alumno< M ; alumno++){
		printf("\nAlumno: %s\n", Alumnos[alumno]);
		for(asig=0; asig< N ; asig++){
			printf("Introduce la nota de %s: ",Asignaturas[asig]);
			scanf("%f",&Notas[alumno][asig]);
		}
	}
	return;
}

void PromedioAlumno(float Notas[][N], float Promedio[]){
	int alumno, asig;
	float suma;
	for(alumno=0; alumno< M ; alumno++){
		suma=0;
		for(asig=0; asig< N ; asig++){
			suma = suma + Notas[alumno][asig];
		}
		Promedio[alumno] = suma / asig;
	}
	return;
}

float PromedioAsignatura(float Notas[][N], int n){
	int alumno;
	float suma;
	suma=0;	
	for(alumno=0; alumno< M ; alumno++){			
		suma = suma + Notas[alumno][n];
	}
	return suma / alumno;
}







