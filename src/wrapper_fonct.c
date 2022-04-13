/*
** EPITECH PROJECT, 2021
** wrapper_fonct.c
** File description:
** my_printf
*/

#include "my_lib_printf.h"

void wrapper_spe(va_list list)
{
    my_putstr("%");
}

void wrapper_put_nbr_sign(va_list list)
{
    my_putnbr_unsigned(va_arg(list, unsigned));
}

void wrapper_pointeur(va_list list)
{
    my_putstr(pointeur(va_arg(list, char *)));
}

void wrapper_putchar(va_list list)
{
    my_putchar(va_arg(list, int));
}

void wrapper_putstr(va_list list)
{
    my_putstr(va_arg(list, char *));
}
