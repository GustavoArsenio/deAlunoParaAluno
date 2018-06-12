#include <stdio.h>
//A função sizeof define em Bytes o tamanho do tipon da variavel
struct estruturaInteira{
int a;
int b;
int c;
};
struct mistura{
int a;
int n;
double h;
};


int main(){
int i, vetori[10];
float f, vetorf[10];
double d, vetord[10];
//struct x estruturaInteira;
//struct y mistura;

printf(" A variavel inteira possui: %i bytes | ja o vetor [10] possui: %i bytes \n",sizeof(i),sizeof(vetori));
printf(" A variavel float possui: %i bytes | ja o vetor [10] possui: %i bytes \n",sizeof(f),sizeof(vetorf));
printf(" A variavel double possui: %i bytes | ja o vetor [10] possui: %i bytes \n",sizeof(d),sizeof(vetord));
//printf("A struct com 3 valores inteiros é: %i \n",sizeof(x));
//printf("A struct inesperada com 2 inteiros e 1 double é: %i", sizeof(y));

}
