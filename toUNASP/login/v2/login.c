#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "login.h"
int unsigned linhaIgnorar;

int main (){
    int cadLogin();
    void montarLogin();
    int showLog(FILE * arq);
    int excluir(int linha, FILE * arg);

    printf("\t\t\t *** Cadastro *** \n");
    cadLogin(fopen("./toLogon.txt","a+"));

    printf("\t\t\t *** Login *** \n");
    cadLogin(fopen("./toLogin.txt","w"));
    montarLogin();


    int linhaS = 0;
    showLog(fopen("./toLogon.txt","a+"));
    printf("Digite qual item deseja excluir: ");
    scanf("%i",&linhaS);
    excluir(linhaS, fopen("./toLogon.txt","r") );
    showLog(fopen("./toLogon.txt","a+"));

}
