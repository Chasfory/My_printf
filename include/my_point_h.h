/*
** EPITECH PROJECT, 2021
** my_point_h.h
** File description:
** my_printf
*/

#ifndef _MY_POINT_H_
#define _MY_POINT_H_

#include <stdarg.h>

typedef struct my_printf_s {
    char flag;
    void (*func)(va_list);
} my_printf_t;

void wrapper_spe(va_list list);
void wrapper_putchar(va_list list);
void wrapper_putstr(va_list list);
void wrapper_put_nbr(va_list list);
void wrapper_put_nbr_sign(va_list list);
void wrapper_binary(va_list list);
void wrapper_octal(va_list list);
void wrapper_formating_flag(va_list list);
void wrapper_hexadecimal(va_list list);
void wrapper_hexadecimal_capital(va_list list);
void wrapper_pointeur(va_list list);

static const my_printf_t tab[12] = {
    {.flag = 'c', wrapper_putchar},
    {.flag = 's', wrapper_putstr},
    {.flag = 'i', wrapper_put_nbr},
    {.flag = 'd', wrapper_put_nbr},
    {.flag = 'o', wrapper_octal},
    {.flag = 'u', wrapper_put_nbr_sign},
    {.flag = 'x', wrapper_hexadecimal},
    {.flag = 'X', wrapper_hexadecimal_capital},
    {.flag = 'p', wrapper_pointeur},
    {.flag = 'S', wrapper_formating_flag},
    {.flag = 'b', wrapper_binary},
    {.flag = '%', wrapper_spe},
};

static const int size = sizeof(tab) / sizeof(tab[0]);

#endif /* My_point_h */
