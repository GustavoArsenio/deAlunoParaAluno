#include "semLimite.h"
#include <stdio.h>
#include <stdlib.h>
int main () {
    void chamaLeitura();
    int escrever(FILE * arquivo);
    int ler(FILE * file);

    if( escrever(fopen( "./umTexto.txt" , "a+")) ){

        printf("\n ** escrever - semLimites WORKS **\n");
        chamaLeitura();
    }else{

        printf("\n ** escrever - semLimites FAIL **\n");

    }

}
void chamaLeitura(){
if( ler(fopen( "./umTexto.txt" , "a+"))){

        printf("\n ** ler - semLimites WORKS **\n");

    }else{

        printf("\n ** ler - semLimites FAIL **\n");

    }

}
