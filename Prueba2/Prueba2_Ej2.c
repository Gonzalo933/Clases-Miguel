#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 100

int Primo(int numero);
void Contar(int vector[M],int tamano,int *numero_primos);
int RellenarVectores(int vector[M],int tamano,int *vec_primo,int *vec_clave);
int Clave(int num1,int num2);

void main(int argc, char* argv[]){
	
	int vec_inicial[M];
	int i;
	int tamano;
	int num_claves;
	int *vec_primo;
	int *vec_clave;
	int numero_primos;
	printf("Tamano vector inicial: \n");
	scanf("%d",&tamano);
	
	//Validar

	for(i=0; i < tamano; i++){
		printf("Elemento:");
		scanf("%d",&vec_inicial[i]);
	}
	Contar(vec_inicial,tamano,&numero_primos);
	vec_primo = (int *)calloc(numero_primos, sizeof(int));
	vec_clave = (int *)calloc( (numero_primos *(numero_primos - 1)), sizeof(int));
	printf("Numero de Primos: %d\n",numero_primos); 
	num_claves = RellenarVectores(vec_inicial,tamano,vec_primo,vec_clave);
	printf("Claves:\n");
	for(i=0;i<num_claves;i++){
		printf("%d\n",vec_clave[i]);
	}
	
	free(vec_primo);
	free(vec_clave);
}

int Primo(int numero){
	int i;
    for (i=2; i<numero; i++) {
        if (numero % i == 0 && i != numero) return 0;
    }
    return 1;
	
}

void Contar(int vector[M],int tamano,int *numero_primos){
	int i;
	(*numero_primos)=0;
	for(i=0;i<tamano;i++){
		if(Primo(vector[i])== 1){
			(*numero_primos)= (*numero_primos) + 1;
		}
	}
	return;
}

int RellenarVectores(int vector[M],int tamano,int *vec_primo,int *vec_clave){
	int i;
	int k = 0;
	int j;
	int q=0;
	int clave_actual;
	for(i=0;i<tamano;i++){
		if(Primo(vector[i])== 1){
			vec_primo[k] = vector[i];			
			k++;			
		}		
	}
	for(i=0;i<k;i++){
		for(j=i+1;j<k;j++){		
			clave_actual= Clave(vec_primo[i],vec_primo[j]);			
			if(clave_actual > 0){
				vec_clave[q] = clave_actual;
				q++;
			}			
		}
	}
	return q;
}

int Clave(int num1,int num2){
	/*
	Se dice que una clave es suficientemente robusta si el producto de dos numeros
	primos es mayor que la suma de los cuadrados inmediatamente anteriores a esos primos / 2
	*/
	//Esto es igual que
	//if( (num1 * num2) > ((pow(num1-1,2) + pow(num2-1,2))/2))
	if( (num1 * num2) > (((num1-1) * (num1-1)) + ((num2-1) * (num2-1)))/2){
		return (num1 * num2);
	}else{
		return 0;
	}
}