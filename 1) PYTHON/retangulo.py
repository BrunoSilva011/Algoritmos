import math

altura = float(input( "Digite a altura do retângulo: " ))
base = float(input( "Digite a base do retângulo: " ))

area = altura * base
perimetro = 2 * ( base + altura )
diagonal = math.sqrt( altura ** 2 + base ** 2 )

print( f"""
Área: { area } 
Perímetro: { perimetro }
Diagonal: { diagonal }
""" )