
int cadLogin(FILE *arquivoLogin){
    char x[2];
    x[1] = '\0';
    int i = 0;
    printf("-------------------------------------------------------------\n");
    printf("| Digite o Login: ");
    while( ( x[0] = getchar() ) != '\n'){
        if(i <= 31){
            putc( x[0],arquivoLogin);
        }
        i++;
    }
    while( i <= 31 ){
     putc('0',arquivoLogin);
     i++;
    }
    putc('_', arquivoLogin);
    i = 0;

    printf("-------------------------------------------------------------\n");
    printf("| Digite o senha: ");
    while( ( x[0] = getchar() ) != '\n' &&  i < 31){
        putc( x[0],arquivoLogin);
        i++;
    }
    while( i <= 31 ){
     putc('0',arquivoLogin);
     i++;
    }

    putc('\0',arquivoLogin);
    putc('\n',arquivoLogin);
    fclose(arquivoLogin);
    printf("-------------------------------------------------------------");
    system("cls");
}

int ler(char userToLog[66]){
    int valido = 0;
    char nome[66],b[2];
    int i = 0;
    FILE * arq = fopen("./toLogon.txt" ,"r");
    while( (b[0] = fgetc(arq)) != EOF ){
        if(b[0] != '\n' && i <=65){
            nome[i] = b[0];
            i++;
        }else if( b[0] == '\n'  ){
           // printf("\n  <- nome: -> %s de tamanho %i \n",nome,sizeof(nome));
           // printf("\n comparar com: %s \n",userToLog);
            if(!strcmp(userToLog,nome)){
              valido = 1 ;
             }
            i=0;
        }

    }
    return valido;
    fclose(arq);
    system("pause");
}
int montarLogin(  ){
    int ler(char userToLog[66]);
    char nomeu[66],bu[2];
    int iu = 0;
    FILE * arqLog = fopen("./toLogin.txt","r");
    char paraLogar[66];
    while( (bu[0] = fgetc(arqLog)) != '\0'  && iu <=64){
            nomeu[iu] = bu[0];
            iu++;
    }
    nomeu[65]='\0';
    iu = 0;
   //printf("\n  <- nome toLog: -> %s \n",nomeu);
    fclose(arqLog);
    return ( ler(nomeu) );

}
int showLog(FILE * arq){
    char x[2]={'\0','\0'};
    int i = 0, index = 1;
    printf("\n\n\n ** Usuario: ");
    while( ( x[0] = fgetc(arq) )!= EOF){

        if(x[0] !='0' && x[0] != '_' && x[0]!='\n'){
            printf("%s",x);
        }else if(x[0]=='_'){
            printf("\n ** Senha: ");
        }else if(x[0] == '\n' && i != 0){
            printf("\n\nIndex: %i \n ** Usuario: ",index);
        }
        if(x[0]!='\n'){
                i++;
        }else{
            index++;
        }
        if(i==65){
            i=0;
        }
    }
    fclose(arq);
}
int excluir(int linha, FILE * arq){
    int i =0, nLinha = 1;
    FILE * arqSem = fopen("./jaExcluido.txt","w");
    char x[2]={'\0','\0'};
    while(( x[0] = fgetc(arq) )!= EOF){
        if(nLinha != linha){
            fputc(x[0],arqSem);
       // printf("%s",x);
        }else if(i==64){
        //   fputc('\n',arqSem);
            fputc('\n',arqSem);
        }
        if(x[0]=='\n'){
            i=0;
            nLinha++;
        }
        i++;
    }
    i=0;
    freopen("./toLogon.txt","w",arq );
    freopen("./jaExcluido.txt","r",arqSem);
    while( (x[0] = fgetc(arqSem))!= EOF){
        fputc(x[0],arq);
    }
    fclose(arq);
    fclose(arqSem);
    system("cls");
}
