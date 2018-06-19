nome = str(input("Digite seu nome: "))
nome = nome.split()
print("Primeiro nome: {}".format( nome[0] ) )
print("Ultimo nome: {}".format( nome[ len(nome) -1 ] ) )