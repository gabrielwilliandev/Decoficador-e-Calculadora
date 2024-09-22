// Escreva um programa que use essa biblioteca e imprima os limites minimos e maximos que podem ser assumidos por variaveis 
// dos tipos char, int, short int, unsigned int, long int, unsigned long int, long long int, unsigned long long int. 
// Apresente os resultados em uma tabela.

#include <stdio.h>
#include <limits.h>

int main() {
    printf("Tipo\t\tMinimo\t\t\tMaximo\n");
    printf("Char:\t\t%d\t\t\t%d\n", CHAR_MIN, CHAR_MAX);
    printf("Int:\t\t%d\t\t\t%d\n", INT_MIN, INT_MAX);
    printf("Short int:\t%d\t\t\t%d\n", SHRT_MIN, SHRT_MAX);
    printf("Unsigned int:\t0\t\t\t%u\n", UINT_MAX);
    printf("Long int:\t%ld\t\t\t%ld\n", LONG_MIN, LONG_MAX);
    printf("Unsigned long int:\t0\t\t\t%lu\n", ULONG_MAX);
    printf("Long long int:\t%lld\t\t\t%lld\n", LLONG_MIN, LLONG_MAX);
    printf("Unsigned long long int:\t0\t\t\t%llu\n", ULLONG_MAX);

    system("pause");
    return 0;
}
