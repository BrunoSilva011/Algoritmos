using System;

namespace CalculoRaio
{
	class Program
	{
		static void Main( string[ ] args )
		{
			double raio, area;
			
			Console.WriteLine( "Digite o raio do circulo: " );
			raio = float.Parse( Console.ReadLine ( ) );
			
			area = 3.14 * ( raio * raio );
			Console.WriteLine( $"Area circulo: {area}" );
		}
	}
}