 #include <stdio.h>
 #include "lerPorTecla.h"

int main (){

    int mostrarConteudoTXT(FILE * file);

    mostrarConteudoTXT( fopen("./umTexto.txt","r") );
    //x[++i] = '\n';
//    printf("%s", x);

    system("pause");
    return 0;
}
