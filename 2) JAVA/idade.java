import java.util.Scanner;

public class Main {
	public static void main( String[ ] args ) {
		Scanner scanner = new Scanner( System.in );
		int idade1, idade2, media;
		String nome1, nome2;
		
		System.out.println( "Digite o nome da primeira pessoa: " );
		nome1 = scanner.next( );
		
		System.out.println( "Digite a idade da primeira pessoa: " );
		idade1 = scanner.nextInt( );
		
		System.out.println( "Digite o nome da segunda pessoa: " );
		nome2 = scanner.next( );
		
		System.out.println( "Digite a idade da segunda pessoa: " );
		idade2 = scanner.nextInt( );
		
		media = ( idade1 + idade2 ) / 2;
		
		System.out.printf( "A media das idades, de: %s e %s%n %d", nome1, nome2, media );
		
		scanner.close( );
	}
}