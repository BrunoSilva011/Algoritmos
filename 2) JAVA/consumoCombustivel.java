import java.util.Scanner;

public class Main {
	public static void main( String[ ] args ) {
		Scanner scanner = new Scanner( System.in );
		int distancia, combuGasto, consuMedio;
		
		System.out.println( "Qual a distancia percorrida? " );
		distancia = scanner.nextInt( );
		
		System.out.println( "Digite o combustivel gasto: " );
		combuGasto = scanner.nextInt( );
		
		consuMedio = distancia / combuGasto;
		System.out.printf( "Consumo medio: %d%n", consuMedio );
		
		scanner.close( );		
	}
}