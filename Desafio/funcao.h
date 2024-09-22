#ifndef FUNCAO_H
#define FUNCAO_H
#include <stdio.h>
#include <math.h>

/*

O código está funcionando em partes. Por alguma razão, o valor do resultado que não está correto.

x irá receber o valor em decimal de desafio.c e o valor de b, para retornar um valor igual a 0 ou igual a 1, caso seja igual a 0 o caracter não deve ser apresentado.

*/
int funcao(int x, int b){
	
	int arredonda;
    long double result;

    // Constantes
    
    long double a0 = 186.752;
    long double a1 = -148.235;
    long double a2 = 34.5049;
    long double a3 = -3.5091;
    long double a4 = 0.183166;
    long double a5 = -0.00513554;
    long double a6 = 0.0000735464;
    long double a7 = -4.22038e-7;

    result = (a0+(a1+b))*(x+a2*pow(x, 2))+(a3*pow(x, 3))+(a4*pow(x, 4))+(a5*pow(x, 5))+(a6*pow(x, 6))+(a7*pow(x, 7));

    arredonda = (int)round(result);

    if(arredonda == 0){

        return 0;
    }
    else{

        return 1;
    }

}


#endif