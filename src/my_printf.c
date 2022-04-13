/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** semestre1
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my_lib_printf.h"

int my_printf_bis(char *s, int i, int size)
{
    my_putchar('%');
    my_putchar(s[i]);
    return (size);
}

int my_printf(char *s, ...)
{
    va_list list;

    va_start(list, s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '%') {
            i++;
            for (int a = 0; a < size; a++) {
                if (s[i] == tab[a].flag)
                    tab[a].func(list);
                if (s[i] == 'h' || (s[i] > 'i' && s[i] < 'n') ||
                s[i] == 'q' || s[i] == 'r' || s[i] == 't' ||
                s[i] == 'v' || s[i] == 'w' || s[i] == 'y')
                    a = my_printf_bis(s, i, size);
            }
        } else
            my_putchar(s[i]);
    }
    va_end(list);
    return (0);
}
