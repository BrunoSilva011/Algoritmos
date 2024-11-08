#include <stdio.h>

int main( ) {
	int salario, horas, pagamento;
	
	printf( "Digite seu salario ganho por hora trabalhada: " );
	scanf( "%d", &salario );
	printf( "Digite a quantidade de horas trabalhadas: " );
	scanf( "%d", &horas );
	
	pagamento = horas * salario;
	
	printf( "Pagamento de: %d", pagamento );
}