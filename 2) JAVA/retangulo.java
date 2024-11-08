import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int base, altura, perimetro, area;
        double diagonal;
        
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Digite a base do retangulo: ");
        base = scanner.nextInt();
        
        System.out.println("Digite a altura do retangulo: ");
        altura = scanner.nextInt();
        
        area = base * altura;
        perimetro = 2 * (base + altura);
        diagonal = Math.sqrt((base * base) + (altura * altura));
        
        // Usando printf para uma saída formatada
        System.out.printf("Area: %d, Perimetro: %d, Diagonal: %.2f%n", area, perimetro, diagonal);
        
        scanner.close();
    }
}