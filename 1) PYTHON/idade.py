print( "Dados da primeira pessoa: " )
nome1 = input( "Digite o nome da primeira pessoa: " )
idade1 = int(input( "Digite a primeira idade: " ))

print( "Dados da segunda pessoa: " )
nome2 = input( "Digite o segundo nome: " )
idade2 = int(input( "Digite a segunda idade: " ))
media = ( idade1 + idade2 ) / 2

print( f"A média das idades de, { nome1 } e { nome2 } é de: { media:.1f } anos" )
