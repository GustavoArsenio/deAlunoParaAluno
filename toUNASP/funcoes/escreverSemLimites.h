 int escrever(){
    char x[2];
    int fim = 0;
    FILE * arquivo = fopen( "./umTexto.txt" , "a+");
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

    return 1;
}

