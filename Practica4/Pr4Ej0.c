#include <stdio.h>
#include <stdlib.h>


float Average(int x1, int x2){
	return (x1+x2)/2;
}
void main(int argc, char* argv[])
{
float x= 10;
float y = 20;

printf("Media (10 y 20): %.3f\n", Average(x,y));

return;
}