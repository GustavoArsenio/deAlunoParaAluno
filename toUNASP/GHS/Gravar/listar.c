#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lerPorTecla.h"
#include "codigo.h"
#include <memory.h>
int main(){
    void showItens();
    void showMarcas();
    void showCods();
    void procurarCod();
    void procurarItens(FILE * arqMarcas);
    void limparBuffer();
    int mostrarConteudoTXTCod(FILE * file );
    int concatEbuscar(char* str1,char* str2);
    void mostrar2Letras(FILE * file);
    int choiCod =0;
    system("cls");
    printf("\n Se quiser consultar um equipamento por código digite 1 \n");
    printf("\n Se quiser consultar um equipamento por marcas digite 2 \n");
    printf("\n Se quiser consultar um equipamento por Itens digite 3 \n");
    int choiEQ=0;
    // Switch de Equipamentos
    printf("\n\nDigite qual a sua procura: ");
    scanf("%i",&choiEQ);
    system("cls");
    switch(choiEQ){
        case 1:
    // CÓDIGOS

    printf("\n Se quiser consultar Todos os códigos digite 1 \n");
    printf("\n Se quiser consultar um código digite 2 \n");
    scanf("%i",&choiCod);
    system("cls");
    printf("\n \t\t ********************************  Cods  *****************************  \t\t\n\n");
    switch(choiCod){
        case 1:
    mostrarConteudoTXTCod(fopen(".\\arquivos\\Equipamentos\\Cod\\Cods.txt","r"));//Busca o valor no TXT e lista

    printf("\n \t\t *********************************************************************  \t\t\n\n");
    break;
    case 2:
        limparBuffer();
        procurarCod();// Esse busca um valor que o usuario escolher
    break;
    }
    break;
    case 2:
    // MARCAS

    printf("\n \t\t ****************************  Marcas  *********************************  \t\t \n");



    mostrar2Letras(fopen(".\\arquivos\\Equipamentos\\Marca\\Marcas.txt","r"));

    printf("\n \t\t *************************************************************  \t\t\n\n");
    void procurarMarca(FILE * arqMarcas);
    limparBuffer();
    procurarMarca(fopen(".\\arquivos\\Equipamentos\\Marca\\Marcas.txt","r"));
    break;
    case 3:
    //  ITENS
    printf("\n \t\t ****************************  Itens  *********************************  \t\t\n\n");

    mostrar2Letras(fopen(".\\arquivos\\Equipamentos\\Item\\Itens.txt","r"));

    printf(" \n\t\t *************************************************************  \t\t\n\n");
    limparBuffer();
    procurarItens(fopen(".\\arquivos\\Equipamentos\\Item\\Itens.txt","r"));
    break;
    }
}
void showMarcas(){
    int mostrarConteudoTXT(FILE * file);
    mostrarConteudoTXT(fopen(".\\arquivos\\Equipamentos\\Marca\\Marcas.txt","r"));
}
void showItens(){
    int mostrarConteudoTXT(FILE * file);
    mostrarConteudoTXT(fopen(".\\arquivos\\Equipamentos\\Item\\Itens.txt","r"));
}
void showCods(){
    int mostrarConteudoTXT(FILE * file);
    mostrarConteudoTXT(fopen(".\\arquivos\\Equipamentos\\Cod\\Cods.txt","r"));
}
void limparBuffer(){
    char ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}
void procurarCod(){
    char numero[32],n[2];
    n[1] = '\0';
    //mostrarConteudoTXTCod( fopen(".\\arquivos\\Equipamentos\\Cod\\Cods.txt","r") );
    printf("Digite o id que deseja procurar: ");
    int i =0;
    while((n[0] = getchar()) != '\n' && i<31){
        numero[i] = n[0];
        i++;
    }
    numero[i]='\0';
    char * number =  (char *) malloc(i);
    strcpy(number,numero);




    concatEbuscar(".\\arquivos\\Equipamentos\\Cod\\",number );
}
void procurarMarca(FILE * arqMarcas){
    void limparBuffer();
    char n[2],produto[32],x[2];
    int tam=0,i=0;
    x[1] = '\0';
    n[1] = '\0';
    //mostrarConteudoTXTCod( fopen(".\\arquivos\\Equipamentos\\Cod\\Cods.txt","r") );
    printf("Digite o id da marca que deseja procurar: ");
    int cont =0,linha=1,numero=1;
    scanf("%i",&numero);
    system("cls");
    while( (x[0] = fgetc(arqMarcas)) != EOF ){
        if(x[0]!= '\n' && x[0] != ' '){
            produto[i] = x[0];
            tam++;
            i++;
        }
        if(x[0] == '\n'){
            if(linha == numero){
                produto[i] = '\0';
                break;
            }
            linha++;
            tam=0;
            i=0;
        }
    }
        printf("\n");
        printf("\n \t\t ****************************  Marcas  *********************************  \t\t \n");
        concatEbuscar(".\\arquivos\\Equipamentos\\Marca\\",produto);

    system("pause");

}

void procurarItens(FILE * arqMarcas){
    void limparBuffer();
    char n[2],produto[32],x[2];
    int tam=0,i=0;
    x[1] = '\0';
    n[1] = '\0';
    //mostrarConteudoTXTCod( fopen(".\\arquivos\\Equipamentos\\Cod\\Cods.txt","r") );
    printf("Digite o id da marca que deseja procurar: ");
    int cont =0,linha=1,numero=1;
    scanf("%i",&numero);
    system("cls");
    while( (x[0] = fgetc(arqMarcas)) != EOF ){
        if(x[0]!= '\n' && x[0] != ' '){
            produto[i] = x[0];
            tam++;
            i++;
        }
        if(x[0] == '\n'){
            if(linha == numero){
                produto[i] = '\0';
                break;
            }
            linha++;
            tam=0;
            i=0;
        }
    }
        printf("\n");

    printf("\n \t\t ****************************  Itens  *********************************  \t\t\n\n");
        concatEbuscar(".\\arquivos\\Equipamentos\\Item\\",produto);

    system("pause");

}
