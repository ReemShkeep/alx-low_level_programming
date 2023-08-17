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
printf("%d is %s\n", i,"negative");
}
else if (i == 0)
{
printf("%d is %s\n", i, "zero");
}	
else
{
printf("%d is %s\n", i,"positive");
}
return;
}
