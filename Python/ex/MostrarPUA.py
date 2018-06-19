frase = str( input("Digite uma frase: ") )
print("Tem {} letras 'a' ".format(frase.lower().count('a')))
print("A primeira letra 'a' está na posição: {}".format( frase.strip().lower().find('a')))
print("A ultima letra 'a' está na posição: {}".format( frase.strip().lower().rfind('a') ) )