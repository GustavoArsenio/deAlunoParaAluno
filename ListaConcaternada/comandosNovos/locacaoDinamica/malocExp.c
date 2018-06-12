#include <stdio.h>
#include <stdlib.h>
//Após solicitar uma variavel que aponta a memória da variavel o malloc(Memory Allocation), define a memoria que está locada dentro da variavel

int main(void){
int *p = (int *) malloc(sizeof(int));
//o ponteiro p pega um espaço de memória de 8 bytes
//Daí dizemos para o sistema operacional que precisa alocar um espaço de memorias de tamanho int(4 bytes);
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
