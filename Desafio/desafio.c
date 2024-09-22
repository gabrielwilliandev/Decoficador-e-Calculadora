#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "funcao.h"

int main(){
    int i, x, b, tamanho, decimal;
    char codigo[10000], ascii, caracter[3];

    printf("Digite a quantidade de mensagens a serem decodificadas: ");
    scanf("%d", &x);

    do{

        printf("Digite a variavel: ");
        scanf("%d", &b);
        getchar();

        printf("Digite a mensagem: ");
        fgets(codigo, 9999, stdin);

        tamanho = strlen(codigo);

        for( i = 0; i < tamanho - 1; i += 2){
            caracter[0] = codigo[i];
            caracter[1] = codigo[i+1];
            caracter[2] = '\0';
            
            decimal = (int)strtol(caracter, NULL, 16); // Converte Hexadecimal para Decimal
            

            ascii = (char)decimal; // Converte Decimal para ASCII

            if(funcao(decimal, b) == 1){
            

            printf("%c", ascii);

            }

        }
        printf("\n");
        x--;
    }while(x != 0);





    return 0;
}