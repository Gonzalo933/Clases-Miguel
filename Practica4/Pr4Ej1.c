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


void main(int argc, char* argv[]){

printf("Elevar 10^3: %.3f\n", Elevar(10.0 , 3));
printf("Elevar 2^-2: %.3f\n", Elevar(2.0 , -2));

return;
}