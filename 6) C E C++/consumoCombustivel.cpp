#include <iostream>

int main( ) {
	int distancia, consumoMedio, gasto;
	
	std::cout << "Digite a distancia percorrida: ";
	std::cin >> distancia;
	std::cout << "Digite o combustivel gasto: ";
	std::cin >> gasto;
	
	consumoMedio = distancia / gasto;
	
	std::cout << "Consumo medio: " << consumoMedio << std::endl;
}