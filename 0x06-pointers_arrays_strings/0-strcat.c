#include "main.h"
#include <stdio.h>

/**
 *  * _strcat - concatenates @src to @dest
 *   * @src: the source string to append to @dest
 *    * @dest: the destiation string to be concatenated upon
 *     * Return:pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
char s1[98] = "Hello ";
char s2[] = "World!\n";
char *ptr;
putchar("%s\n", s1);
putchar("%s", s2);
ptr = _strcat(s1, s2);
putchar("%s", s1);
putchar("%s", s2);
putchar("%s", ptr);
return (0);
}
