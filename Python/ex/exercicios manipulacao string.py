nome = str( input("Digite seu nome: ") )
print("O nome minusculo: {}".format( nome.lower() ) )
print("O nome MAIUSCULO {}".format( nome.upper() ) )
nome = nome.split()
print("O primeiro nome tem {} letras".format( len(nome[1]) ) )
print("Sem Espaços: {}".format( ''.join(nome)) )