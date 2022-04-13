/*
** EPITECH PROJECT, 2021
** my_putnbr_unsigned.c
** File description:
** my_printf.c
*/

#include <unistd.h>

int my_putchar(char c);

unsigned my_putnbr_unsigned(unsigned nb)
{
    if (nb >= 10) {
        my_putnbr_unsigned(nb / 10);
    }
    my_putchar((nb % 10) + '0');
    return (0);
}
