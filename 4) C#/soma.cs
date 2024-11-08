using System;

namespace Soma
{
	class Program
	{
		static void Main( string[ ] args )
		{
			int num1, num2, soma;
			Console.WriteLine( "Digite o primeiro valor: ");
			num1 = Convert.ToInt32(Console.ReadLine( ));
			Console.WriteLine( "Digite o segundo valor: ");
			num2 = Convert.ToInt32(Console.ReadLine( ));
			
			soma = num1 + num2;
			
			Console.WriteLine( "Soma: " + soma );
		}
	}
}	