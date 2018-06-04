#include <stdio.h>

#define PI 3.14159
#define NULO 0;

double calcularArea( double Raio ){
    return Raio * Raio * PI;
}

int main(void){
double calcularArea( double Raio );

double Raio =0 ;
printf("Digite o raio: ");
scanf("%lf",&Raio);

printf("A area do circulo e: %lf", calcularArea(Raio));

}




/* teste
start Region
#define SIM 100
#define NAO -100

int main(void){
    int x =0;
    printf("Digite um numero inteiro: ");
    scanf("%i",&x);

    (x<=10)? printf("\n\n %i \n\n",NAO): printf("\n\n %i \n\n",SIM);

    system("pause");
    return 0;
}
*/

