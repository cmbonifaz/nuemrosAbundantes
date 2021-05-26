#include <iostream>
#include <stdio.h>
using namespace std;
//grupo 1 factores de un numero

//grupo 2 fibonacci de un numero

//grupp 3 los n primeros numeros primos

//grupo 4  los n numeros abundantes

void abundantes(int n, int cont=1, int div=1, int numIni=2, int suma=0)
{

    printf("~~ lista de numeros abundantes ~~\n");
    printf("\nLos numeros abundantes son: ");

 do{
 do {
    if (numIni%div==0){
         suma=div+suma;
    }
    div=div+1;

    } while(div<numIni);

   if (suma>numIni){
    printf("%i   ",numIni);
    cont=cont+1;
   }
div=1;
suma=0;
numIni=numIni+1;
}while(cont<=n);
return;
}

//grupo 5  los n numeros deficientes

//grupo 6 validar n que sea mayor que 10 y menores que 20

