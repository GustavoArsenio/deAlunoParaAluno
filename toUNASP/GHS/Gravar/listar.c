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
    void limparBuffer();
    int mostrarConteudoTXTCod(FILE * file );
    int concatEbuscar(char* str1,char* str2);
    void mostrar2Letras(FILE * file);

    /* Codigos
    void procurarCod();

    printf("\n \t\t ********************************  Cods  *****************************  \t\t\n\n");

    mostrarConteudoTXTCod(fopen(".\\arquivos\\Equipamentos\\Cod\\Cods.txt","r"));//Busca o valor no TXT e lista

    printf("\n \t\t *********************************************************************  \t\t\n\n");
    procurarCod();// Esse busca um valor que o usuario escolher
    */
    printf("\n \t\t ****************************  Marcas  *********************************  \t\t \n");

    void procurarMarca();

    mostrar2Letras(fopen(".\\arquivos\\Equipamentos\\Marca\\Marcas.txt","r"));

    printf("\n \t\t *************************************************************  \t\t\n\n");
    procurarMarca();


    /*

    printf("\n \t\t ****************************  Itens  *********************************  \t\t\n\n");

    mostrar2Letras(fopen(".\\arquivos\\Equipamentos\\Item\\Itens.txt","r"));

    printf(" \n\t\t *************************************************************  \t\t\n\n");
    printf("\n \t\t ********************************  Cods  *****************************  \t\t\n\n");

    showCods();

    printf("\n \t\t *************************************************************  \t\t\n\n");

  /*
    showMarcas();

    printf(" \n\n ****************************************************************** \n\n");
    showItens();
    printf(" \n\n ****************************************************************** \n\n");
    showCods();
    */

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
void procurarMarca(){
    void limparBuffer();
    char numero[32],n[2],produto[32],x[2];
    FILE * arqMarcas = fopen(".\\arquivos\\Equipamentos\\Marca\\Marcas.txt","r");
    x[1] = '\0';
    n[1] = '\0';
    //mostrarConteudoTXTCod( fopen(".\\arquivos\\Equipamentos\\Cod\\Cods.txt","r") );
    printf("Digite o id que deseja procurar: ");
    int i =0,linha=1;
    while((n[0] = getchar()) != '\n' && i<31){
        numero[i] = n[0];
        i++;
    }
    numero[i]='\0';
    int * number =  (int *) malloc(i);
    strcpy(number,numero);
    printf("\n >> Numero: %s \n",number);
    i=0;

    while( ( (x[0]) = fgetc( arqMarcas ) )!= EOF ){

        if( x[0]!='\n' && x[0]!=' '){
                produto[i] = x[0];
        }
        if(x[0] == ' '){
             produto[i] = '\0';
        }
        i++;
        if(x[0]=='\n'){
            printf("\n >>Fim linha %i - %s<< \n",linha,produto);
            printf(" >>> %s == %i <<<",number,linha);//  O PROBLEMA TA AQUI
                system("pause");
            if( (int)number == linha) {
                break;
            }else{
                linha++;
                i=0;
            }

        }

    }
    if(x[0] == EOF){
        printf("\n\n\n  *** FIM *** \n\n\n");
    }

                printf(" marca >> %s ", produto);
                system("pause");
        concatEbuscar(".\\arquivos\\Equipamentos\\Marca\\",produto );


}
