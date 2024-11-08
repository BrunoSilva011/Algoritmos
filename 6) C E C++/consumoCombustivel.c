#include <stdio.h>

int main( ) {
	int distancia, consumoMedio, gasto;
	
	printf( "Digite a distancia percorrida: " );
	scanf( "%d", &distancia );
	printf ( "Digite o combustivel gasto: " );
	scanf( "%d", &gasto );
	
	consumoMedio = distancia / gasto;
	
	printf( "Consumo medio: %d", consumoMedio );
}