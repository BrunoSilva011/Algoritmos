#include <stdio.h>

int main( ) {
	float a, b, c, quadrado, trapezio, triangulo;

	printf( "Digite o valor da medida A: " );
	scanf( "%f", &a );
	printf( "Digite o valor da medida B: " );
	scanf( "%f", &b );
	printf( "Digite o valor da medida C: " );
	scanf( "%f", &c );
	
	quadrado = a * a;
	trapezio = ( a + b ) * c / 2;
	triangulo = ( a * b ) / 2;
	
	printf( "Area quadrado:%.2f\nArea triangulo:%.2f\nArea trapezio:%.2f", quadrado, triangulo, trapezio );
}