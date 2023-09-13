#include "main.c"
/**
 * Print_alphabet
 * Always return 0
 */
void print_alphabet(void)
{
char letter = 'a';
while(letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar("\n");
}
