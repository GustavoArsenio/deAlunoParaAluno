int mostrarConteudoTXT(FILE * file ){
    char x [2];
    x[1]='\0';
    while((x[0] = fgetc(file) ) != EOF ){
        printf("%s",x);
    }
    printf("\n\n");
    return 1;
}

void mostrar2Letras(FILE * file){
    char x[4];
    int i =1;
    x[2] ='\0';
    x[3]='\0';
    printf("\n %i -- ",i);
    while((x[0] = fgetc(file) ) != EOF && (x[1] = fgetc(file) ) != EOF){
        if( x[0] == '\n' || x[1]== '\n' ){
            if( (x[2] = fgetc(file))  == EOF){
                break;
            }else{
                 printf(" \n %i -- ", ++i);
            }
        }
       if(x[0]!= '\n' && x[0]!= ' ') printf("%c",x[0]);
       if(x[1]!= '\n' && x[1]!= ' ') printf("%c",x[1]);
       if(x[2]!= '\0' && x[2]!= ' '){ printf("%c",x[2]); x[2] = '\0';}
       // printf("%c",x[2]);
    }
    fclose(file);
}
