// Escreva um programa que use essa biblioteca e imprima os limites minimos e maximos que podem ser assumidos por variaveis 
// dos tipos char, int, short int, unsigned int, long int, unsigned long int, long long int, unsigned long long int. 
// Apresente os resultados em uma tabela.

#include <stdio.h>
#include <limits.h>

int main() {
	
    printf("%-25s %-25s %-25s\n", "Tipo", "Minimo", "Maximo");
    
    printf("%-25s %-25d %-25d\n", "Char:", CHAR_MIN, CHAR_MAX);
    printf("%-25s %-25d %-25d\n", "Int:", INT_MIN, INT_MAX);
    printf("%-25s %-25d %-25d\n", "Shor Int:", SHRT_MIN, SHRT_MAX);
    printf("%-25s %-25d %-25u\n", "Unsigned Int:", 0, UINT_MAX);
    printf("%-25s %-25ld %-25ld\n", "Long Int:", LONG_MIN, LONG_MAX);
    printf("%-25s %-25d %-25lu\n", "Unsigned Long Int:", 0, ULONG_MAX);
    printf("%-25s %-25lld %-25lld\n", "Long Long Int:", LLONG_MIN, LLONG_MAX);
    printf("%-25s %-25d %-25llu\n", "Unsigned Long Long Int:", 0, ULLONG_MAX);
	printf("\n");
    system("pause");
    return 0;
}
