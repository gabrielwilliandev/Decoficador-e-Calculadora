#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "funcao.h"

int main(){
    int i, x = 1, b, decimal, quantidade;
    char codigo[10000], hex[3];

    printf("Digite a quantidade de mensagens a serem decodificadas: ");
    scanf("%d", &quantidade);

    do{

        printf("Digite a variavel: ");
        scanf("%d", &b);
        getchar();

        printf("Digite a mensagem: ");
        fgets(codigo, 9999, stdin);


        for( i = 0; codigo[i] != '\0'; i += 2){
            hex[0] = codigo[i];
            hex[1] = codigo[i+1];
            hex[2] = '\0';
            
            decimal = (int)strtol(hex, NULL, 16); // Converte Hexadecimal para Decimal
            

            if(funcao(x, b) != 0){

                if(hex[0] == '0' && hex[1] == '0'){ // Verifica se são os caracteres nulos.
                    break;

                }else{

                     printf("%c", decimal);

                }

            }
            x++;
        }
        printf("\n");
        quantidade--;
    }while(quantidade != 0);





    return 0;
}