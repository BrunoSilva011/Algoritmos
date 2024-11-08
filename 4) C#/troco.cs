using System;

namespace Troco
{
	class Program
	{
		static void Main( string[ ] args )
		{
			float troco, preco, pagamento;
			int qtd;
			
			Console.WriteLine( "Digite a quantidade de produto: " );
			qtd = Convert.ToInt32( Console.ReadLine( ) );
			
			Console.WriteLine( "Digite o preco do produto: " );
			preco = float.Parse( Console.ReadLine( ) );
			
			Console.WriteLine( "Digite o dinheiro pago: " );
			pagamento = float.Parse( Console.ReadLine( ) );
			
			troco = pagamento - ( preco * qtd );
			Console.WriteLine( "Troco : " + troco );
		}
	}
}	