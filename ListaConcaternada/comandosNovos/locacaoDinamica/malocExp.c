#include <stdio.h>
#include <stdlib.h>
//Ap�s solicitar uma variavel que aponta a mem�ria da variavel o malloc(Memory Allocation), define a memoria que est� locada dentro da variavel

int main(void){
int *p = (int *) malloc(sizeof(int));
//o ponteiro p pega um espa�o de mem�ria de 8 bytes
//Da� dizemos para o sistema operacional que precisa alocar um espa�o de memorias de tamanho int(4 bytes);
//Retorna um ponteiro void por isso o casting(int *)
*p =1000;

return 0;
}


/*
int main(){
//exemplo

short x;
x=10;
int c[10];
short *p = &x;


return 0;
}
*/
