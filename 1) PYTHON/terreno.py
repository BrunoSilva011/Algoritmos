largura = float(input( "Digite a largura do terreno: " ))
comprimento = float(input( "Digite o comprimento do terreno: " ))
valor_metro = float(input( "Digite o valor do metro quadrado: " ))

area = largura * comprimento
preco = valor_metro * area

print( f"O valor do terreno é de: R${ preco:.2f }" )