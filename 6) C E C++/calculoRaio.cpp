#include <iostream>

int main( ) {
	float area, raio, calculo;

	std::cout << "Digite o raio do circulo: ";
	std::cin >> raio;
	
	calculo = raio * raio;
	area = 3.14 * calculo;
	
	std::cout << "Area: " << area << std::endl;
}