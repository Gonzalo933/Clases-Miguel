#include <stdio.h>
#include <stdlib.h>

float BuscarInteres(float capital_inicial, int num_anios);
float CalculoCapital(float inicial, int interes);
double Elevar(double base, int exponente);
void main(int argc, char* argv[]){

	float capital, interes;
	int annios;
	printf("introduce un capital inicial: \n");
	scanf("%lf",&capital);	
	
	do{
		printf("introduce anios: \n");
		scanf("%d",&annios);
		if((annios < 10){
			printf("Error\n");
		}
	}while(annios < 10);
	
	interes = BuscarInteres(capital, annios);
	
	pritnf("El interes minimo debe ser: %lf\n",interes);

	return;
}

float BuscarInteres(float capital_inicial, int num_anios){
	float capital_actual = 0;
	float interes;
	for(interes=0;(capital_inicial * 2) > capital_actual; interes++){
		CalculoCapital(capital_inicial,interes,num_anios);		
	}
	return interes;
}

float CalculoCapital(float inicial, float interes, int annios){
	float capital_acumulado;
	capital_acumulado = inicial * Elevar((1 + interes/100),annios) ;
	return capital_acumulado;
}


float Elevar(float base, int exponente){
	int veces;
	// porque cualquier numero elevado a 0 es 1
	float resultado = 1.0; 
	
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