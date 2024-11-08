using System;

namespace Horario
{
	class Program
	{
		static void Main( string[ ] args )
		{
			int horas, minutos, segundos, horario, resto;
			
			Console.WriteLine( "Digite o horario em segundos: " );
			horario = Convert.ToInt32( Console.ReadLine( ) );
			
			horas = horario / 3600;
			resto = horario % 3600;
			minutos = resto / 60;
			segundos = resto % 60;
			
			Console.WriteLine( $"Horas:{horas}Minutos:{minutos}Segundos{segundos}" );
		}
	}
}