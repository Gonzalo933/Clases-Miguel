#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define M 3

void main(int argc, char* argv[]){

	int a,b,c;
	int * x;
	a = 1;
	b = 2;
	c = 3;

	c = fun_punteros(a,x);

	printf("a: %d  b : %d , c: %c",a,b,c);


}


int fun_punteros(int a, int  * b){
	a = 10;
	*b = 11;
	return 12;
}


/*

Ejercicios:

8, 13

*/