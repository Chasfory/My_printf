/*
** EPITECH PROJECT, 2021
** wrapper_fonct_tree.c
** File description:
** my_printf
*/

#include "my_lib_printf.h"

void wrapper_hexadecimal_capital(va_list list)
{
    my_putstr(hexadecimal_capital(va_arg(list, unsigned)));
}
