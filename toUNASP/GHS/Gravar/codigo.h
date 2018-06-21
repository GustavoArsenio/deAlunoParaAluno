int concatEbuscar(char* str1,char* str2){
      char * str3 = (char *) malloc(5 + strlen(str1)+ strlen(str2) );
      strcpy(str3, str1);
      strcat(str3, str2);
      strcat(str3, ".txt");
      //printf("String de conexao: %s\n Resultado >>", str3);
        FILE * arq = fopen(str3,"r");
        mostrarConteudoTXT(arq);
      return 0;
 }
int mostrarConteudoTXTCod(FILE * file ){
    int concat(char* str1,char* str2);
    char x [2];
    char numero[32],n[2];
    n[1] = '\0';
    int i =0;
    x[1]='\0';
    while((x[0] = fgetc(file) ) != EOF ){
        printf("%s",x);
        if( (x[0] >= '0') && (x[0]<='9') ) {
            if((n[0] = x[0]) != '\n' && i<31){
                numero[i] = n[0];
                i++;
            }
        }
        if(x[0]== '\n'){
            numero[i]='\0';
            char * number =  (char *) malloc(i);
            strcpy(number,numero);
            concatEbuscar(".\\arquivos\\Equipamentos\\Cod\\",number );
            i=0;
        }
    }
    printf("\n\n");
    return 1;
}
