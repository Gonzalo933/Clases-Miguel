#include <stdio.h>
#include <stdlib.h>

double Elevar(double base, int exponente){
	int veces;
	// porque cualquier numero elevado a 0 es 1
	double resultado = 1.0; 
	
	if(exponente > 0){ //Caso exponente positivo
	
		for(veces=0; veces < exponente; veces ++)
			resultado = resultado * base;
			
	}else if(exponente < 0){ //Caso exponente negativo
		for(veces=0; veces > exponente; veces --)
			resultado = resultado / base;
	
	}	
	//En caso de que exponente == 0 devuelve resultado que es = 1
	return resultado;
}



double CalcularSerie(double epsilon){
int exponente=1;
double suma=0.0;
double ultimo_termino;

//Mientras el ultimo termino calculado sea mayor que el epsilon, seguir calculando
	do{
		ultimo_termino = exponente / Elevar(2.0,exponente);		
		//printf("Terminos: %f \n",ultimo_termino);
		suma = suma + ultimo_termino;
		exponente ++;
	}while(ultimo_termino > epsilon);

	return  suma;
}


void main(int argc, char* argv[]){

double epsilon;

printf("Introduce Epsilon: \n");

// %lf para leer doubles
scanf("%lf",&epsilon);

printf("Valor de la Serie: %f\n", CalcularSerie(epsilon));

return;
}