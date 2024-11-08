import java.util.Scanner;

public class Main {
	public static void main( String[ ] args ) {
		Scanner scanner = new Scanner( System.in );
		float preco, valor, largura, comprimento, area;
		
		System.out.println( "Digite a largura do terreno: " );
		largura = scanner.nextFloat( );
		
		System.out.println( "Digite o comprimento do terreno: " );
		comprimento = scanner.nextFloat( );
		
		System.out.println( "Digite o valor do metro quadrado: " );
		valor = scanner.nextFloat( );
		
		area = comprimento * largura;
		preco = valor * area;
		
		System.out.printf( "O valor do terreno sera de: %.2fR$", preco );
		
		scanner.close( );
	}
}