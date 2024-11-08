#include <stdio.h>

int main( ) {
	int idade1, idade2, media;
	char nome1[ 15 ], nome2[ 15 ];
	
	printf( "Digite o primeiro nome: " );
	scanf( "%14s", nome1 );
	printf( "Digite a primeira idade: " );
	scanf( "%d", &idade1 );
	
	printf( "Digite o segundo nome: " );
	scanf( "%14s", nome2 );
	printf( "Digite a segunda idade: " );
	scanf( "%d", &idade2 );
	
	media = ( idade1 + idade2 ) / 2;

	printf( "Media: %d\n", media );
}