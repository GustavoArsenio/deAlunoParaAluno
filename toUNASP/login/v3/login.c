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
    cadLogin(fopen("./toLogon.txt","a+"));//cadastra

    printf("\t\t\t *** Login *** \n");
    cadLogin(fopen("./toLogin.txt","w"));//login
    montarLogin();//retorna o login valido ou n 


    int linhaS = 0;
    showLog(fopen("./toLogon.txt","a+"));// lista login
    printf("Digite qual item deseja excluir: ");
    scanf("%i",&linhaS);
    excluir(linhaS, fopen("./toLogon.txt","r") );//exclui login
    showLog(fopen("./toLogon.txt","a+"));//list dnv

}
