#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int delta (int a, int b, int c) {

    int d;

    d = (b*b - 4*a*c);

    printf("\n \n \n O valor de delta e : %d \n \n \n", d);


    return d;

}

int solucao1 (int a, int b, int c, int d) {

    



    float x1;

    x1 = (b + sqrt(double d)) / 2*a ;

    printf("\n \n \n O valor da primeira solucao e : %f \n \n \n", x1);


    return x1;

}


int solucao2 (int a, int b, int c, int d) {


    float x1;

    x1 = (b + sqrt(d)) / 2*a ;

    printf("\n \n \n O valor da primeira solucao e : %f \n \n \n", x1);


    return x1;

}



int main()
{

    int a, b, c,d;



    printf("\n DIGITE O VALOR NUMERICO DO TERMO DO SEGUNDO GRAU : ");
    scanf("%d",&a);
    printf("\n DIGITE O VALOR NUMERICO DO TERMO DO PRIMEIRO GRAU : ");
    scanf("%d",&b);
    printf("\n DIGITE O VALOR NUMERICO DO TERMO DO SEM GRAU : ");
    scanf("%d",&c);

    delta(a,b,c);
    solucao1(a, b, c, d);

     printf("\n sqrt : %f", sqrt(4) );




    return 0;
}














