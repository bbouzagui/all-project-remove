#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    const char *ptr;
    char *str;

    va_start(args, format);

    for (ptr = format; *ptr != '\0'; ++ptr)
    {
        if (*ptr == '%')
        {
            ++ptr;
            switch (*ptr)
            {
            case 'c':
                count += write(1, (char)va_arg(args, int), 1);
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    str = "(null)";
                count += write(1, str, _strlen(str));
                break;
            case '%':
                count += write(1, "%", 1);
                break;
            default:
                write(1, "Unknown format specifier\n", 24);
                va_end(args);
                return (-1);
            }
        }
        else
        {
            count += write(1, ptr, 1);
        }
    }

    va_end(args);
    return (count);
}

/**
 * _strlen - Calculate the length of a string
 * @s: Input string
 *
 * Return: Length of the string
 */
int _strlen(const char *s)
{
    int len = 0;
    while (*s != '\0')
    {
        len++;
        s++;
    }
    return (len);
}