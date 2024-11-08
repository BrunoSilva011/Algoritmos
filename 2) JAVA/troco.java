import java.util.Scanner;

public class Main {
	public static void main( String[ ] args ) {
		Scanner scanner = new Scanner( System.in );
		float troco, preco, dinheiro;
		int quant;
		
		System.out.println( "Digite a quantidade do produto: " );
		quant = scanner.nextInt( );
		
		System.out.println( "Digite o valor do produto: " );
		preco = scanner.nextFloat( );
		
		System.out.println( "Digite o dinheiro pago: " );
		dinheiro = scanner.nextFloat( );
		
		troco = dinheiro - (quant * preco);
		
		System.out.printf( "Troco: %.2fR$", troco );
		
		scanner.close( );
	}
}