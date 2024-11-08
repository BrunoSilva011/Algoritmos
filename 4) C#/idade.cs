using System;

namespace Idade 
{
	class Program
	{
		static void Main( string[ ] args )
		{
			int idade1, idade2, media;
			string nome1, nome2;
			
			Console.WriteLine( "Digite o nome da primeira pessoa: " );
			nome1 = Console.ReadLine( );
			Console.WriteLine( "Digite a idade da primeira pessoa: " );
			idade1 = Convert.ToInt32( Console.ReadLine( ) );
			
			Console.WriteLine( "Digite o nome da segunda pessoa: " );
			nome2 = Console.ReadLine( );
			Console.WriteLine( "Digite a idade da segunda pessoa: " );
			idade2 = Convert.ToInt32( Console.ReadLine( ) );
			
			media = ( idade1 + idade2 ) / 2;
			Console.WriteLine( $"A media das idades de, {nome1} e {nome2} sera de \nMedia: {media}" );
		}
	}
}