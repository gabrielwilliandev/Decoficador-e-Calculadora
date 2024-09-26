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
        fgets(codigo, 9999, stdin); //fgets coleta a mensagem a ser decodificada. Lê 9999 para que a última posição receba '\0'


        for( i = 0; codigo[i] != '\0'; i += 2){ //o laço for faz a verificação para separar a mensagem em um vetor com 3 caracteres, pois a cada 2 caracteres há um caractere da mensagem sendo representado
            hex[0] = codigo[i];
            hex[1] = codigo[i+1];
            hex[2] = '\0';
            
            decimal = (int)strtol(hex, NULL, 16); // Converte Hexadecimal para Decimal
            

            if(funcao(x, b) != 0){ //if para verificar se a mensagem é diferente de 0

                if(hex[0] == '0' && hex[1] == '0'){ // Verifica se são os caracteres nulos. No caso de serem nulos, encerram o for
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
