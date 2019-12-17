#include <stdio.h>

int compare( const void* a, const void* b)
{
     int int_a = * ( (int*) a );
     int int_b = * ( (int*) b );

     if ( int_a == int_b ) return 0;
     else if ( int_a < int_b ) return -1;
     else return 1;
}

int main(void){
    int vetor[10]=[6,5,2,3,4,1,9,8,7,0];
    int i;

    qsort( vetor, 10, sizeof(int), compare )

    system("pause");
    return 0;
}
