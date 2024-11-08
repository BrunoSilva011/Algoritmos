using System;

namespace Terreno
{
	class Program 
	{
		static void Main( string[ ] args )
		{
			int comprimento, largura, area;
			float valorMetro, valor;
			
			Console.WriteLine( "Digite o comprimento do terreno: " );
			comprimento = Convert.ToInt32( Console.ReadLine( ) );
			Console.WriteLine( "Digite a largura do terreno: " );
			largura = Convert.ToInt32( Console.ReadLine( ) );
			Console.WriteLine( "Digite o valor do metro quadrado do terreno: " );
			valorMetro = Convert.ToInt32( Console.ReadLine( ) );
			
			area = largura * comprimento;
			valor = valorMetro * area;
			
			Console.WriteLine( "Valor do terreno: " + valor );
		}
	}
}