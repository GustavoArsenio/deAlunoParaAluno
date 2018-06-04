#include <stdio.h>
char sobrescreverArquivos(char fras[30]){
    FILE * arquivo;
    arquivo = fopen("teste.txt","w");
    fprintf(arquivo,fras);
    fclose(arquivo);
}

int main (){

    char frase[30];
    char sobrescreverArquivos(char fras[30]);
    printf("Escreva a frase: ");
    scanf("%s", &frase);
    sobrescreverArquivos(frase);
return 0;
}
