from math import floor
numero  = int( input("Digite um valor: ") )
print("Milhar: {:.0f}".format( floor(numero/1000) ))
numero = numero %1000
print("Centena: {:.0f}".format( floor(numero/100) ))
numero = numero %100
print("Dezena: {:.0f}".format( floor(numero/10) ))
numero = numero %10
print("Unidade: {:.0f}".format( numero) )
#print("{}".format(numero))