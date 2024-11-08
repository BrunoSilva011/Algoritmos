using System;

namespace ConsumoCombustivel
{
	class Program
	{
		static void Main( string[ ] args )
		{
			int distancia, consumo, consumoMedio;
			
			Console.WriteLine( "Digite a distancia percorrida: " );
			distancia = Convert.ToInt32( Console.ReadLine( ) );
			Console.WriteLine( "Digite o combustivel gasto: " );
			consumo = Convert.ToInt32( Console.ReadLine( ) );
			
			consumoMedio = distancia / consumo;
			
			Console.WriteLine( $"Consumo medio: {consumoMedio} " );
		}
	}
}