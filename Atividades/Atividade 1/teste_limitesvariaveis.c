// Faça um pequeno programa, usando uma variavel a qual e atribuida um valor maior do que seu tipo permite, 
// para demonstrar o problema que pode ocorrer.

#include <stdio.h>
#include <limits.h>

int main() {
    
    char valor_maximo= CHAR_MAX;
    
    printf("Valor maximo de char: %d\n", valor_maximo);

    // Overflow
    valor_maximo = valor_maximo + 1; 
    
    printf("Valor apos ultrapassar o limite de char: %d\n", valor_maximo);
    
    system("pause");
    return 0;
}

// Quando o valor da variável ultrapassa o limite, ocorre o overflow. 
// No código acima, a variável do tipo char pode armazenar valores positivos e negativos.
// Se ultrapassar o valor máximo, que é 127, o valor "dá uma volta"  e passa para o limite inferior.
// No caso do char, é -128
