
int compararArquivos(FILE *salvou,FILE *bdTXT){
    char i[2],j[2];
    i[1]='\0';
    j[1]='\0';
    int nomeValidar[2]= {1,0};
    while( (i[0] = fgetc(salvou) ) != EOF && ( j[0]= fgetc(bdTXT) ) != EOF ){
        if(i[0] != j[0]){
            nomeValidar[0]=0;
            break;
        }
    }
    if((i[0] == '\0' && j[0]=='\0')){
        nomeValidar[1] = 1;
    }

    if(nomeValidar[0] && nomeValidar[2]){
        printf("*** Login Valido***");
    }else{
        printf("*** Login Invalido***");
    }

}
int escrever(FILE *arquivo, int isSenha){
    char x[2];
    int fim = 0;
    while( !fim ){
        x[0] = getchar();
       if(x[0] != '\n'){
            putc( x[0],arquivo);
       }else{
            fim = 1;
       }
    }
    if(isSenha){
            putc('\0',arquivo);
            putc('\n',arquivo);
    }else{
            putc('_',arquivo);
    }
            fclose(arquivo);
}
