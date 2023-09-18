#include <stdio.h>

/**
 * print_string - Prints a string followed by a newline to stdout
 * @str: The string to be printed
 *
 * Return: None
 */
void print_string(const char *str)
{
    if (str == NULL)
        return;

    while (*str)
    {
        putchar(*str);
        str++;
    }
    putchar('\n');
}

int main(void)
{
    const char *myString = "Hello, World!";
    print_string(myString);
    return (0);
}
