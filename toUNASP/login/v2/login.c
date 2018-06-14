#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
    int cadLogin();
    void montarLogin();
  /*  printf("\t\t\t *** Cadastro *** \n");
    cadLogin(fopen("./toLogon.txt","a+"));
    */
    printf("\t\t\t *** Login *** \n");
    cadLogin(fopen("./toLogin.txt","w"));
    montarLogin();
}
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
    system("clear");
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
    valido ? printf("\n \t\t\t ***Valido*** \t\t\t \n") : printf("\n \t\t\t -> **Invalido** <- \t\t\t \n");
    fclose(arq);
    system("pause");
}
void montarLogin(  ){
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
    ler(nomeu);

}
