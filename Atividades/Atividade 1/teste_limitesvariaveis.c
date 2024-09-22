// Fa�a um pequeno programa, usando uma variavel a qual e atribuida um valor maior do que seu tipo permite, 
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

// Quando o valor da vari�vel ultrapassa o limite, ocorre o overflow. 
// No c�digo acima, a vari�vel do tipo char pode armazenar valores positivos e negativos.
// Se ultrapassar o valor m�ximo, que � 127, o valor "d� uma volta"  e passa para o limite inferior.
// No caso do char, � -128
