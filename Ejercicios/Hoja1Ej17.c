#include <stdio.h>
#include <stdlib.h>


void main(int argc, char* argv[]){

	int dia,mes;
	int maximo_Dias_Mes;
	do{
		printf("introduce mes: \n");
		scanf("%d",&mes);
		if(mes > 12 || mes < 1){
			printf("Error\n");
		}
	}while(mes > 12 || mes < 1);

	
	switch(mes){
		//Meses con 31 dias
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			maximo_Dias_Mes = 31;
			
			break;
		//Meses con 30 dias	
		case 4:
		case 6:		
		case 9:
		case 11:
			maximo_Dias_Mes = 30;
			break;
		case 2:	
			maximo_Dias_Mes = 28; //tecnicamente seria 29, pero el enunciado dice 28
			break;		
	}
	do{
		printf("introduce dia: \n");
		scanf("%d",&dia);
		if(dia > maximo_Dias_Mes || dia < 1){
			printf("Ese mes no tiene tantos dias.\n");
		}
	}while(dia > maximo_Dias_Mes || dia < 1);
	
	printf("Fecha leida:\n");
	printf("%d / %d",dia,mes);


	return;
}