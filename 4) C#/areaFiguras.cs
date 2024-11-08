using System;

namespace AreaFiguras
{
	class Program
	{
		static void Main( string[ ] args ) 
		{
			float a, b, c, quadrado, triangulo, trapezio;
			
			Console.WriteLine( "Digite a medida A: " );
			a = float.Parse( Console.ReadLine( ) );
			Console.WriteLine( "Digite a medida B: " );
			b = float.Parse( Console.ReadLine( ) );
			Console.WriteLine( "Digite a medida C: " );
			c = float.Parse( Console.ReadLine( ) );
			
			quadrado = a * a;
			triangulo = ( a * b ) / 2;
			trazepio = ( a + b ) * c / 2;
			
			Console.WriteLine( $"Area quadrado: {quadrado}\nArea triangulo: {triangulo}\nArea trapezio: {trapezio}" );
		}
	}
}