#include <stdio.h>

#define MAIOR(x,y) x>y ? x : y
#define E_MINUSCULO(char) char >= 'a'  && char <= 'z'

int main(void){

    char x = '5';

    if(E_MINUSCULO(x) ){
        printf("E minusculo!! ");
    }else{
        printf("Nao e minusculo!! ");
    }

    printf("\n\n\n O Maior valor e: %i \n\n\n", MAIOR(10,6));
    system("pause");
    return 0;
}
