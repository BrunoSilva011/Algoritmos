using System;

namespace Retangulo 
{
	class Program
	{
		static void Main( string[ ] args )
		{
			float a, b, area, perimetro;
			double diagonal;
			
			Console.WriteLine( "Digite a altura do retangulo: " );
			a = float.Parse( Console.ReadLine( ) );
			Console.WriteLine( "Digite a base do retangulo: " );
			b = float.Parse( Console.ReadLine( ) );
			
			area = a * b;
			perimetro = 2 * ( b + a );
			diagonal = Math.Sqrt( ( b * b ) + ( a * a ) );
			
			Console.WriteLine( $"Area: {area}\nDiagonal: {diagonal}\nPerimetro: {perimetro}" );
		}
	}
}