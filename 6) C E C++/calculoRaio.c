#include <stdio.h>

int main( ) {
	float raio, area, calculo;
	
	printf( "Digite o raio do circulo: " );
	scanf( "%f", &raio );
	
	calculo = raio * raio;
	area = 3.14 * calculo;
	
	printf( "Area: %.2f", area );
}