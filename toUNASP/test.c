#include <stdio.h>
#include "./"
int main(){
char nome[32];
char nome2[]="Gusta\0o3";
int nomeValidar[2]= {1,0} , i =0 ;

printf("Digite o usuario:");
scanf("%s",nome);

while(!(nome[i] == '\0'|| nome2[i]=='\0')){
    if(nome[i] != nome2[i]){
        nomeValidar[0]=0;
        break;
    }
i++;
}
if((nome[i] == '\0' && nome2[i]=='\0')){
    nomeValidar[1] = 1;
}
if(nomeValidar[0] && nomeValidar[2]){
    printf("*** Login Valido***");
}else{
    printf("*** Login Invalido***");
}
}
