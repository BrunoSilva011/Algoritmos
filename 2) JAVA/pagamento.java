import java.util.Scanner;

public class Main {
	public static void main( String[ ] args ) {
		Scanner input = new Scanner( System.in );
		float salario, pagamento;
		int horas;
		
		System.out.println( "Digite o seu pagamento por hora trabalhada: " );
		salario = input.nextFloat( );
		
		System.out.println( "Digite as horas que voce trabalhou: " );
		horas = input.nextInt( );
		
		pagamento = horas * salario;
		
		System.out.printf( "Seu salario sera de: %.2fR$", pagamento );
		
		input.close( );
	}
}