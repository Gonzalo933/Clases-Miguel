#include <stdio.h>
#include <math.h>



int main(void)
{
	int vector[50];
	int i;

	for(i=0; i<50; i++){
		vector[i] = i*2;
	}
	imprimir_vector(vector,50);
	return;

}	
	
void imprimir_vector(int vector,int tamano){
	int i;
	for(i=0; i< tamano; i++){
		printf("%d ",vector[i]);
	}
	printf("\n");
	return;
}	
	

		