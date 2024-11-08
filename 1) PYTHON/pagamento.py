salario = float(input( "Digite seu salário, por hora trabalhada: " ))
horas = int(input( "Digite a quantidade de horas trabalhadas: " ))
pagamento = salario * horas

print( f"Seu pagamento é de: R${ pagamento:.2f }" )