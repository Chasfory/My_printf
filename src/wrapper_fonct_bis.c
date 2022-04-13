/*
** EPITECH PROJECT, 2021
** wrapper_fonct_bis.c
** File description:
** my_printf
*/

#include "my_lib_printf.h"

void wrapper_put_nbr(va_list list)
{
    my_put_nbr(va_arg(list, int));
}

void wrapper_formating_flag(va_list list)
{
    formating_flag(va_arg(list, char *));
}

void wrapper_binary(va_list list)
{
    my_putstr(binary(va_arg(list, int)));
}

void wrapper_octal(va_list list)
{
    octal(va_arg(list, int));
}

void wrapper_hexadecimal(va_list list)
{
    my_putstr(hexadecimal(va_arg(list, unsigned)));
}
