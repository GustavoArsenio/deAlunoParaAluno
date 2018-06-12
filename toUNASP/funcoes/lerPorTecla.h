int mostrarConteudoTXT(FILE * file ){
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
