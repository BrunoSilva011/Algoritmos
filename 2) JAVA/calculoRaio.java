import java.util.Scanner;

public class Main {
	public static void main( String[ ] args ) {
		Scanner scanner = new Scanner( System.in );
		float raio, area;
		
		System.out.println( "Digite o valor do raio: " );
		raio = scanner.nextFloat( );
		
		area = ( raio * raio ) * (float)Math.PI;
		
		System.out.printf( "Area do circulo: %.2f%n", area );

		scanner.close( );
	}
}