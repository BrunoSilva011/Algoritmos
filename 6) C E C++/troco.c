#include <stdio.h>

int main( ) {
	int quantidade;
	float preco, pagamento, troco;
	
	printf( "Digite a quantidade de produto comprado: " );
	scanf( "%d", &quantidade );
	printf( "Digite o preco do produto: " );
	scanf( "%f", &preco );
	printf( "Digite o dinheiro pago: " );
	scanf( "%f", &pagamento );
	
	troco = pagamento - ( quantidade * preco );
	
	printf( "Troco: %.2f", troco );
}