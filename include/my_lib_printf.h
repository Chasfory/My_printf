/*
** EPITECH PROJECT, 2021
** my_printf.h
** File description:
** semestre1
*/

#ifndef _MY_LIB_PRINTF_H_
#define _MY_LIB_PRINTF_H_

#include <stdlib.h>
#include <stddef.h>
#include "my_point_h.h"

int percentage_n(char *c);
int my_printf(char *s, ...);
char *binary(int nb);
int octal(int nb);
int formating_flag(char *S);
char *hexadecimal(unsigned nb);
char *hexadecimal_capital(unsigned nb);
char *pointeur(char * nb);
unsigned my_putnbr_unsigned(unsigned nb);
int my_put_nbr(int nb);
int my_putstr(char const *str);
void my_putchar(char c);
char *my_revstr(char *str);
int my_strlen(char const *str);

#endif /*MY_LIB_PRINTF_H_*/
