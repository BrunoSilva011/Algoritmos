#include <iostream>

int main( ) {
	int duracao, resto, minutos, segundos, horas;
	
	std::cout << "Digite o tempo em segundos: ";
	std::cin >> duracao;
	
	horas = duracao / 3600;
	resto = duracao % 3600;
	minutos = resto / 60;
	segundos = resto % 60;
	
	std::cout << "Horas:" << horas << "Minutos:" << minutos << "Segundos:" << segundos;
}