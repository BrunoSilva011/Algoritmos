using System;

namespace Pagamento
{
	class Program
	{
		static void Main( string[ ] args ) 
		{
			int horas, pagamento, salario;
			
			Console.WriteLine( "Digite suas horas trabalhadas: " );
			horas = Convert.ToInt32( Console.ReadLine( ) );
			Console.WriteLine( "Digite seu salario por hora de trabalho: " );
			salario = Convert.ToInt32( Console.ReadLine( ) );
			
			pagamento = salario * horas;
			Console.WriteLine( $"Pagamento: {pagamento}" );
		}
	}
}