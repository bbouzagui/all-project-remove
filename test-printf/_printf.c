#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c)
{
    return (write(1, &c, 1));
}

int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;

    va_start(args, format);

    while (*format!= '\0')
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
            {
                char c = va_arg(args, int);
                _putchar(c);
                count++;
            }
            else if (*format == 's')
            {
                char *s = va_arg(args, char *);
                for (; *s!= '\0'; s++)
                {
                    _putchar(*s);
                    count++;
                }
            }
            else if (*format == '%')
            {
                _putchar('%');
                count++;
            }
        }
        else
        {
            _putchar(*format);
            count++;
        }
        format++;
    }
    va_end(args);

    return (count);
}