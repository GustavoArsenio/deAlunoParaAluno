l1Triangulo = int( input("Digite o valor do lado 1: ") )
l2Triangulo = int( input("Digite o valor do lado 2: ") )
l3Triangulo = int( input("Digite o valor do lado 3: ") )

if l1Triangulo <= l2Triangulo+l3Triangulo and l2Triangulo <= l1Triangulo+l3Triangulo and l3Triangulo<=l1Triangulo+l2Triangulo:
    print(" *** Este triangulo é vivavel ***")
else:
    print(" *** triangulo inviavel ***")