int main() {
    float a, b, c, quadrado, trapezio, triangulo;
    
    std::cout << "Digite a medida de A: ";
    std::cin >> a;
    std::cout << "Digite a medida de B: ";
    std::cin >> b;
    std::cout << "Digite a medida de C: ";
    std::cin >> c;
    
    quadrado = a * a;
    triangulo = (a * b) / 2;
    trapezio = (a + b) * c / 2;
    
    std::cout << "Área do quadrado: " << quadrado 
              << "\nÁrea do triângulo: " << triangulo 
              << "\nÁrea do trapézio: " << trapezio 
              << std::endl;
    
    return 0;
}