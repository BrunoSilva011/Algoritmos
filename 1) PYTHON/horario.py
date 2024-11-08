tempo = int(input( "Digite o tempo em segundos: "))

hora = tempo // 3600
resto = tempo % 3600

minuto = resto // 60
segundo = resto % 60

print(f'Hora:{hora:02d},Minuto:{minuto:02d},Segundos:{segundo:02d}' )