#  x = int( input("Digite um valor"))
#x = float(input("Digite a primeira nota "))
#y = float(input("Digite a segunda nota") )
#print("É numero? ", x.isnumeric())
#print("É inteiro? ", x.isinterger())
#print("É espaço? ", x.isspace())
#print("É só letra? ", x.isalpha())
#print("É alfanumerico? ",x.isalnum())
#print("Esta em Maiuscula? ", x.isupper())
#print("Esta em minuscula? ", x.islower())
#print("Esta captalizada?", x.istitle())
#print("O valor tem como dobro {}, tem como triplo {} e tem como raiz {}".format(x*2,x*3, math.sqrt(x)))
#print("A medida de {} e {} é {}".format(x,y,(x+y)/2))

#x = float( input("Digite a quantidade em metros: "))
#print("{} mm".format(x*1000))
##print("{} cm".format(x*100))
#print("{} dm".format(x/10))
#print("{} km".format(x/1000))

#altura = float(input("Digite a altura da parede: "))
#largura = float(input("Digite a largura da parede: "))
#print("A sua parede tem dimensão de {} por {} e a area é: {}".format(altura,largura,altura*largura))
#print("Serão necessarias {} latas de tinta".format(altura*largura/2))


#valor = float(input("Digite o preço do produto: "))
#print("O valor do produto com 5'%' de desconto é: {}".format( valor - (valor/100*5)))

#salario = float(input("Digite o salario do funcionario: "))
#print("O salario atual sera de R${:.2f} ".format(salario+salario/100*15   ))

#km = float(input("Quantos km rodados? "))
#dias = float(input("Quantos dias?"))

#print("R${}".format( (km*0.15) + (dias*60)  ))
#salario = float( input("Digite seu salario: ") )
#if salario <= 1250 :
#    novo = salario+salario*15/100
#else :
#    novo = salario+ salario*10/100

#   *** Esta dando errado ***
#          import math
#   x = input("Digite o angulo: ")
#   print('Seno: {}'.format( math.sin( math.radians( x ) ) ) )


import math

#x = float(input("Digite um valor float: "))
#print("A parte inteira é: {}".format( math.floor(x)  ) )

#cat = float( input ("Digite o comprimento do primeiro cateto: ") )
#cat2 = float( input ("Digite o comprimento do segundo cateto: ") )
#print("A hipotenusa do triangulo retangulo é: {:.2f}".format( math.sqrt( cat2**2+cat**2 ) ) )

#angulo = float( input( "Digite o valor do angulo: " ) )
#print("O seno de {} é {:.2f}".format(   angulo ,math.sin(  math.radians(angulo) ) ))
#print("O cosseno de {} é {:.2f}".format(   angulo ,math.cos(  math.radians(angulo) ) ))
#print("O tangente de {} é {:.2f}".format(  angulo ,math.tan(  math.radians(angulo) ) ))



# import random
#alunos = [ input("Digite o nome do 1º aluno: ") , input("Digite o 2º aluno: "), input("Digite o 3º aluno: "), input("Digite o 4º aluno: ") ]
#random.shuffle(alunos)
#print("O aluno escolhido foi: {}".format(  random.choice(alunos) ))
#print("A ordem será:")
#print(alunos)


# frase = str( input("Digite uma string: ") )
#print("O tamanaho da string é: {}".format( len(frase) ) )
#contar = str( input("Digite uma string para contar: ") )
#print("A letra {} incide {}x".format( contar ,frase.count(contar) ))
# Error procurar = str( input("Digite uma string para procura: ") )
# Error print("A string começa na posição: {}".format(  frase.find('curso')  )
#print("tem a string? {} ".format( 'curso' in frase))