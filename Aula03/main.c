#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//comente seu codigo

float calcular_massa (float a, float b);


int main(int argc, char *argv[]) {
	float a=0, b=0, resultado =0 ;
	printf("\n Digite as massas do elemento A e B: \t");
	scanf ("%f %f", &a, &b);
	
	resultado = calcular_massa(a,b);
	
	printf("\nO resultado � %f", resultado);
	
	return 0;
}



float calcular_massa (float a, float b){
	const float mA=321.43;
	const float mB=150.72;
	
	printf("\n 1,2 : 1,0 \t: = %f", (1,2*mA+1*mB));
	printf("\n 1,4 : 1,0 \t: = %f", (1,4*mA+1*mB));
	printf("\n 1,0 : 1,6 \t: = %f", (1*mA+1,6*mB));
	
	return (a*mA)+(b*mB);
}
