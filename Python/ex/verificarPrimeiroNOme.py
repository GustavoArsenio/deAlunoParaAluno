nome = str( input("Digite o nome completo: ") )
nome = nome.split()
print("Tem Santo no primeiro nome: {}".format( nome[0].lower().find('santo') != -1 ) )