#include <stdio.h>
#include <string.h>
#include "lerPorTecla.h"
int main(){
    void showItens();
    void showMarcas();
    void showCods();
    showMarcas();
    printf(" \n\n****************************************************************** \n\n");
    showItens();
    printf(" \n\n****************************************************************** \n\n");
    showCods();
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
