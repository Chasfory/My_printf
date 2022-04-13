/*
** EPITECH PROJECT, 2021
** fonct_printf.c
** File description:
** my_printf
*/

#include <stdlib.h>
#include "my_lib_printf.h"

char *binary(int nb)
{
    char bin[2] = "01";
    char *result = malloc(sizeof(char) * (nb * 12));
    int i = 0;

    while (nb > 0) {
        result[i] = bin[nb % 2];
        nb = nb / 2;
        i++;
    }
    my_revstr(result);
    return (result);
}

int octal(int nb)
{
    char oct[8] = "01234567";
    char *result = malloc(sizeof(char) * (nb * 12));
    int i = 0;

    while (nb > 0) {
        result[i] = oct[nb % 8];
        nb = nb / 8;
        i++;
    }
    my_revstr(result);
    my_putstr(result);
    return (0);
}

int formating_flag(char *S)
{
    int i = 0;

    for (; S[i] != '\0'; i++) {
        if (S[i] < ' ' || S[i] >= 127) {
            my_putchar('\\');
            if (S[i] < 8)
                my_putstr("00");
            if (S[i] >= 8 && S[i] < 64)
                my_putchar('0');
            octal(S[i]);
        }
        else
            my_putchar(S[i]);
    }
    return (0);
}

char *hexadecimal(unsigned nb)
{
    char hex[16] = "0123456789abcdef";
    char *result = malloc(sizeof(char) * (nb *12));
    int i = 0;

    while (nb > 0) {
        result[i] = hex[nb % 16];
        nb = nb / 16;
        i++;
    }
    my_revstr(result);
    return (result);
}

char *hexadecimal_capital(unsigned nb)
{
    char hex[16] = "0123456789ABCDEF";
    char *result = malloc(sizeof(char) * (nb *12));
    int i = 0;

    while (nb > 0) {
        result[i] = hex[nb % 16];
        nb = nb / 16;
        i++;
    }
    my_revstr(result);
    return (result);
}
