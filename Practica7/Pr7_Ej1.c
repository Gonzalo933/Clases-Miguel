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
	
	float promedio[M]
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
	
	for(alumno=0; i< M ; alumno++){
		printf("Alumno: %s", Alumnos[alumno]);
		for(asig=0; asig< N ; asig++){		
			printf("\t%s\t\t%.2f",Asignaturas[asig],Notas[alumno][asig]);
		}
	}
	printf("Promedio de notas por alumno\n");
	printf("--------------------------\n");
	PromedioAlumno(notas,promedio);
	for(alumno=0; i< M ; alumno++){
		printf("%s: %.2f", Alumnos[alumno],promedio[alumno]);
	}
	
	printf("Introduzca el numero de asignatura de la que desea obtener el promedio:");
	scanf("%d",&promedio_asig);
	
	printf("La media de la asignatura %s es %2.f\n",Asignaturas[promedio_asig],PromedioAsignatura(notas,promedio_asig));
	
	return;
	
}

void CargarAsignaturas(char Asignaturas[][K]){
	
	int i;	
	for(i=0; i< N ; i++){
		printf("Introduce el nombre de la asignatura %d: \n",i+1);
		fgets(Asignaturas[i], K, stdin);
	}
	return;
}

void CargarAlumnos(char Alumnos[][K]){
	int i;	
	for(i=0; i< M ; i++){
		printf("Introduce el nombre del alumno: \n",i+1);
		fgets(Alumnos[i], K, stdin);
	}
	return;
}

void CargarMatriz(float Notas[][N], char Asignaturas[][K], char Alumnos[][K]){
	int alumno, asig;	
	for(alumno=0; i< M ; alumno++){
		printf("Alumno: %s", Alumnos[alumno]);
		for(asig=0; asig< N ; asig++){
		printf("Introduce la nota de %s: \n",Asignaturas[asig]);
		scanf("%f",&Notas[alumno][asig]);
		}
	}
	return;
}

void PromedioAlumno(float Notas[][N], float Promedio[]){
	int alumno, asig;
	float suma;
	for(alumno=0; i< M ; alumno++){
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
	for(alumno=0; i< M ; alumno++){			
		suma = suma + Notas[alumno][n];
	}
	return suma / asig;;
}







