#include <main.h>

/**
 * Concatenates two strings.
 *
 * This function takes two input strings, 'dest' and 'src', and appends the contents of 'src'
 * to the end of 'dest'. The original terminating null byte of 'dest' is overwritten by the first
 * character of 'src', and a new terminating null byte is added at the end to ensure the concatenated
 * string is properly terminated.
 *
 * @param dest The destination string where 'src' will be concatenated.
 * @param src The source string to be appended to 'dest'.
 * @return A pointer to the resulting concatenated string 'dest'.
 */


char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
	i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	
	
	}

	dest[i]='\0';
	return (dest);

}
