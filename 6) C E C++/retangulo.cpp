#include <iostream>
#include <cmath>

int main( ) {
	float area, base, altura, perimetro, diagonal;
	
	std::cout << "Digite o valor da base: ";
	std::cin >> base;
	std::cout << "Digite o valor da altura: ";
	std::cin >> altura;
	
	area = base * altura;
	perimetro = 2 * ( base + altura );
	diagonal = sqrt( ( base * base ) + ( altura * altura ) );
	
	std::cout << "Area: " << area << "\nPerimetro: " << perimetro << "\nDiagonal: " << diagonal;
}