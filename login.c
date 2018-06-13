#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * arquivo, *arquivo2;
    char x[2], y[2];
    arquivo = fopen("./login.txt","r");
    arquivo2 = fopen("./users.txt","a+");
    while( (y[0] == fgetchar()) != '\n' ){
     putc(y[0],arquivo2);
    }
    printf("saiu");
    while((x[0] = fgetc(arquivo) ) != EOF ){
        (x[0] == y[0]);
     }
}

