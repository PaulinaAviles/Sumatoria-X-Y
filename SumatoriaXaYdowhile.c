//Autor: Paulina Garabeth Avilés Robledo.
//Programa: Sumatoria de X a Y.
//Descripción:Realizr la sumatoria del intervalo X-Y.Pedir valor de X y Y.Utilizar el ciclo DO WHILE.
//Fecha de elaboración: 15/10/12
//Fecha de última modificación: 15/10/12
//Modificaciones hechas:

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float n,a,x,y;
char repet;

int main()
{
    repet='s';
    while((repet=='s')||(repet=='S'))
    {
    a=0;
       printf("Introduce el numero limite\n");
       scanf("%f",&y);
       fflush(stdin);
       
          
       printf("Introduce el numero de inicio de la cuenta\n");
       scanf("%f",&x);
       fflush(stdin);
       
       n=x;
       do
       {
        a=a+(n+pow(n,3)+((n-2)/2)+(((n*n)-n)/3));
        n++;
       }
       while(n<=y);
       
     printf("Sumatoria= %f",a);
     
     printf("\nDesea repetir? S/N \n");
     scanf("%c",&repet);
     fflush(stdin);
     }/*while*/
     
  
  getch();
}
