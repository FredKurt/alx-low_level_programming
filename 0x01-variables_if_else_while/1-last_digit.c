#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
int x, y;
srand(time(0));
x = rand();
y = x % 10;
printf("The last digit of the number %d is %d \n", x, y);
return (0);
}
