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

double CalcularSerie(int n){
int exponente;
double suma=0.0;
	for(exponente=1; exponente <= n; exponente++)
		suma = suma + exponente / Elevar(2.0,exponente);

	return  suma;
}


void main(int argc, char* argv[]){

int n;
printf("Introduce n: \n");
scanf("%d",&n);

printf("Valor de la Serie: %.3f\n", CalcularSerie(n));

return;
}