#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - Determines whether a given integer is positive, negative, or zero.
 * @i: The integer to be evaluated.
 * Return: None.
*/
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is negative", i);
}
else if (i == 0)
{
printf("%d is zero", i);
}
else
{
printf("%d is positive", i);
}
return;
}
