#include <iostream>

int main( ) {
	int pagamento, salario, horas;
	
	std::cout << "Digite o seu salario por hora trabalhada: ";
	std::cin >> salario;
	std::cout << "Digite suas horas trabalhadas: ";
	std::cin >> horas;
	
	pagamento = horas * pagamento;
	std::cout >> "Pagamento de: " << pagamento << std::endl;
}