numeros=('zero','um','dois','tres','quatro','cinco','seis','sete','oito','nove','dez','onze','doze','treze','quatorze','quinze','dezesseis','dezessete','dezoito','dezenove','vinte')
while True:
    numero = int(input("Digite um valor entre 0 e 20: ") )
    if 0<= numero and numero <=20:
        break
    else:
        print('Número inválido, digite novamente')
    

print(numeros[numero])