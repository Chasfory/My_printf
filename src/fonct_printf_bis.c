/*
** EPITECH PROJECT, 2021
** fonct_printf_bis.c
** File description:
** my_printf
*/

#include "my_lib_printf.h"

char *pointeur(char * nb)
{
    unsigned int add = nb;
    my_putstr("0x");
    return (hexadecimal(add));
}