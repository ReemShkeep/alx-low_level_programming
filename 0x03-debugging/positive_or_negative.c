#include "main.h"
#include <stdio.h>

/**
* positive_or_negative(int i) - tests if an integer is positive, negative, or zero
* @i: The integer to be tested
* Return: void
*/
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is (%s)negative\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}	
else
{
printf("%d is positive\n", i);
}
return;
}
