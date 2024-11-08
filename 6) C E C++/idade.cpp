#include <iostream>

int main( ) {
	int idade1, idade2, media;
	std::string nome1, nome2;
	
	std::cout << "Digite o primeiro nome: ";
	std::cin >> nome1;
	std::cout << "Digite a primeira idade: ";
	std::cin >> idade1;
	std::cout << "Digite o segundo nome: ";
	std::cin >> nome2;
	std::cout << "Digite a segunda idade: ";
	std::cin >> idade2;
	
	media = ( idade1 + idade2 ) / 2;
	std::cout << "Media das idades: " << media << std::endl;
}