#include <math.h>
#include <conio.h>
#include <stdio.h>
float f(float x);
float fp(float x);

int main (void)
{float i, x, xant, e, div;
printf("POR EL METODO DE NEWTON RAPHSON\n");
printf("Vamos a calcular la raiz de \n f(x)=2X^2-X-5\n");
printf("DAME X0\n");
scanf("%f",&xant);
e=1;
while(e>=0.01)
{   xant=x;
    div=f(xant)/fp(xant);
    x=xant-div;
    e=fabs(x-xant);
    i++;
    printf("iteracion%.0f= %.3f\t error igual a%.4f\n",i,x,e);

}
printf("\n\nEl valor de la raiz es igual a %.3f\n\n",x);
printf("error igual a %.3f\n\n",e);
printf("numero de iteraciones %.0f\n\n",i);
system("\npause");
return 0;
}


float f(float x)
{float y;
    y=(2*pow(x,2))-x-5;
    return (y);
}
float fp(float x)
{float y;
    y=(4*x)-1;
    return (y);
}
