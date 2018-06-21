#include <stdio.h>
#include <string.h>
#include "lerPorTecla.h"
int main(){
    void showItens();
    void showMarcas();
    void showCods();
    void mostrar2Letras(FILE * file);
    printf("\n \t\t ****************************  Marcas  *********************************  \t\t \n");

    mostrar2Letras(fopen(".\\arquivos\\Equipamentos\\Marca\\Marcas.txt","r"));

    printf("\n \t\t *************************************************************  \t\t\n\n");
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
