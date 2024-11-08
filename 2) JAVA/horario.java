import java.util.Scanner;

public class Main { 
	public static void main( String[ ] args ) {
		Scanner scanner = new Scanner( System.in );
		int horas, minutos, segundos, duracao, resto;
		
		System.out.println( "Digite o tempo em segundos: ");
		duracao = scanner.nextInt( );
		
		horas = duracao / 3600;
		resto = duracao % 3600;
		
		minutos = resto / 60;
		segundos = resto % 60;
		
		System.out.printf( "Horas:%dMinutos:%dSegundos:%d", horas, segundos, minutos );
		
		scanner.close( );
	}		
}