#include <stdio.h>
#include <math.h>

int main( ) {
	float base, altura, area, diagonal, perimetro;
	
	printf( "Digite o valor da base: " );
	scanf( "%f", &base );
	printf( "Digite o valor da altura: ");
	scanf( "%f", &altura );
	
	
	area = base * altura;
	perimetro = 2 * ( base + altura );
	diagonal = sqrt( ( base * base ) + ( altura * altura ) );
	
	printf( "Area: %.2f\nPerimetro: %.2f\nDiagonal: %.2f", area, perimetro, diagonal); 
}