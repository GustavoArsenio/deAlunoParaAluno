#include <stdio.h>

int somarMatriz(int *pMatriz){//recebe um ponteiro de parametro referente a matriz ou vetor
    int aux =0;
    for(int i = 0; i < 25; i++){//faz a soma
     aux += *pMatriz;
    pMatriz++;//ao incrementar o ponteiro indica que deve mostrar a proxima posicao do vetor ou matriz (ponteiro deve estar sem os asterisco "*")
    }

     printf(" O resultado da soma �: %i",aux);

}
int mostrarMatriz(int *pMatriz)//recebe um ponteiro de parametro referente a matriz ou vetor//
{
    int aux =0;
    for(int i = 0; i < 25; i++){
     (i != 0) ? ( (i%5 == 0)? printf("\n") : printf(" | ") ) : printf("");// A sintaxe (condicao)? se for verdade : se for falso ;
     aux = *pMatriz;
     printf("%i",aux);
    pMatriz++;
    }

}

int main(){
    int mostrarMatriz(int *pMatriz);//Setar funcao de mostrar Matriz, para usar nesse scopo//
    int somarMatriz(int *pMatriz);//Setar funcao de soma dessa Matriz, para usar nesse scopo//
    int matriz[5][5]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};// Instanciar Matriz 5x5;
    mostrarMatriz(*matriz);//Passando referencia de ponteiro
    printf("\n\n\n\n\n \t *Soma* \n");
    somarMatriz(*matriz);//Passando referencia de ponteiro
}
