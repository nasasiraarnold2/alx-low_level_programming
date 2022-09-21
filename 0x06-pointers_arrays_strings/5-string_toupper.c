#include "main.h"
/**
 *  * string_toupper - changes all lowercase letters of a string
 *   * to uppercase
 *    * @s: input string.
 *     * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
char str[] = "Look up!\n";
char *ptr;
ptr = string_toupper(str);
putchar("%s", ptr);
putchar("%s", str);
return (0);
}
