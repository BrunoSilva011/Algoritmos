import java.util.Scanner;

public class Main {
	public static void main( String[ ] args ) {
		Scanner scanner = new Scanner( System.in );
		int a, b, c, trapezio, quadrado, triangulo;
		
		System.out.println( "Digite a medida A: " );
		a = scanner.nextInt( );
		
		System.out.println( "Digite a medida B: " );
		b = scanner.nextInt( );
		
		System.out.println( "Digite a medida C: " );
		c = scanner.nextInt( );
		
		quadrado = a * a;
		triangulo = ( a * b ) / 2;
		trapezio = ( a + b ) * c / 2;
		
		System.out.printf( "Area do quadrado: %d%nArea do triangulo: %d%nArea do trapezio: %d", quadrado, triangulo, trapezio );
		
		scanner.close( );
	}
}