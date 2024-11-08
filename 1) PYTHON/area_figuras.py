a = float(input( "Digite a medida de A: " ))
b = float(input( "Digite a medida de B: " ))
c = float(input( "Digite a medida de C: " ))

areaQuadrado = a * a
areaTriangulo = ( a * b ) / 2
areaTrapezio = ( a + b ) * c / 2

print( f""" 
Área do quadrado: { areaQuadrado } 
Área do triângulo: { areaTriangulo }
Área do trapézio: { areaTrapezio }
""" ) 