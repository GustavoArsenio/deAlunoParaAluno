#ifndef SEMLIMITE_H
#define SEMLIMITE_H
#include <stdio.h>

 int escrever(FILE *arquivo){
    char x[2];
    int fim = 0;
    while( !fim ){
        x[0] = getchar();
       if(x[0] != '\n') {
            putc( x[0],arquivo);
       }else{
        putc('\0',arquivo);
        putc('\n',arquivo);
        fim = 1;
       }
    }
    fclose(arquivo);
    return 1;

}
int mostrarNaTela(FILE * file ){
    char x [2];
    int i = 0;
    x[1]='\0';
    while((x[0] = fgetc(file) ) != EOF ){

    /*if(x[0]!= '.' && x[0]!=  '\n'){
        printf("%s",x);
    }else{
    printf("\t <<< Sem ponto\n");
    } tem comentário fechando aqui */

    (x[0]!= '.') ? ( (x[0]!=  '\n') ? printf("%s",x) : printf("\n") ): printf("");

    }
    printf("\n\n");
    fclose(file);
    return 1;
}
int comparar(char *letra_1, char *letra_2){
    if( letra_1 == letra_2  ){
        return 1;
    }else{
        return 0;
    }
}
#endif
