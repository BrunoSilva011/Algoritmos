import java.util.Scanner;

public class Main {
    public static void main( String[] args ) {
        Scanner scanner = new Scanner( System.in );

        System.out.println( "Digite o primeiro valor: " );
        int numero1 = scanner.nextInt( );

        System.out.println( "Digite o segundo valor: " );
        int numero2 = scanner.nextInt( );

        int soma = numero1 + numero2;

        System.out.println( "Soma: " + soma );
        
        scanner.close( );
    }
}
