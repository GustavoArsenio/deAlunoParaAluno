int mostrarConteudoTXT(FILE * file ){
    char x [2];
    int i = 0, sequencia=0;
    x[1]='\0';
    while((x[0] = fgetc(file) ) != EOF ){
        printf("%s",x) ;
    //(x[0]!= ' ') ?  : sequencia = 1;

    }
    printf("\n\n");
    return 1;
}
