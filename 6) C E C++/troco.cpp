#include <iostream>

int main( ) {
	int quantidade;
	float preco, pagamento, troco;
	
	std::cout << "Digite a quantidade de produto comprado: ";
	std::cin >> quantidade;
	std::cout << "Digite o preco do produto: ";
	std::cin >> preco;
	std::cout << "Digite o pagamento: ";
	std::cin >> pagamento;
	
	troco = pagamento - ( quantidade * preco );
	
	std::cout << "Troco de: " << troco << std::endl;
}