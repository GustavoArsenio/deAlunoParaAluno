#include <stdio.h>


int main (){

    int mostrarConteudoTXT(FILE * file, int posicao);
    mostrarConteudoTXT(fopen("./umTexto.txt","r"), -1);
   // x[++i] = '\n';
    //printf("%s", x);

    system("pause");
    return 0;
}


int mostrarConteudoTXT(FILE * file , int posicao){
    char x [2];
    int i = 0;
    x[1]='\0';
    while((x[0] = fgetc(file) ) != EOF ){

    /*if(x[0]!= '.' && x[0]!=  '\n'){
        printf("%s",x);
    }else{
    printf("\t <<< Sem ponto\n");
    }*/

    (x[0]!= '.') ? ( (x[0]!=  '\n') ? printf("%s",x) : printf("\n") ): printf("");

    }
    printf("\n\n");
    return 1;
}
