precoUnitario = float(input( "Digite o preço unitário do produto: " ))
qtdProduto = float(input( "Digite a quantidade de produto comprado: " ))
dinheiro = float(input( "Quanto em dinheiro você tem, para pagar o produto: " ))
preco = precoUnitario * qtdProduto
troco = dinheiro - preco

print( f"O seu troco será de: R${ troco:.2f }" )