#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define fx pow(x,3)-9*x+5

float secante(float xn,float xnAnt);
float f(float x);


main()
{
    float xn,xnAnt,xnPost,aux;

    xnAnt=0.;
    xn=0.5;

    printf("%.1f",f(xn));

    while (abs(f(xn))>pow(10,-5))
    {   aux=xn;
        xn=secante(xn,xnAnt);
        xnAnt=aux;
    }

    printf("A raiz da funcao e %f",xn);
}

float f(float x)
{
    return pow(x,3)-9*x+5;
}

float secante(float xn,float xnAnt)
{

     printf("%.1f %.1f\n",xn,xnAnt);
     return  xn - f(xn)*(xn-xnAnt)/(f(xn)-f(xnAnt));
}

