#include<stdio.h>
#include<stdlib.h>
/**
 *main- if sttatement
 *
 *
 *Return: return 0
 */
int main(void)
{
int n;
n = rand() -RAND_MAX / 2;
if (n > 0)
{
printf(" %d is positve\n", n);
}
else if (n < 0)
{
printf(" %d is negative\n", n);
}
else if (n == 0)
{
printf(" %d is zero\n", n);
}
return (0);
}
