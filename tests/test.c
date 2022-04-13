/*
** EPITECH PROJECT, 2021
** test_my_printf
** File description:
** my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_lib_printf.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stdout();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, percentage_d, .init = redirect_all_std)
{
    my_printf("j'ai %d", 19);
    cr_assert_stdout_eq_str("j'ai 19");
}

Test(my_printf, percentage_i, .init = redirect_all_std)
{
    my_printf("j'ai %i fraise", 20);
    cr_assert_stdout_eq_str("j'ai 20 fraise");
}

Test(my_printf, percentage_o, .init = redirect_all_std)
{
    my_printf("%o", 152);
    cr_assert_stdout_eq_str("230");
}

Test(my_printf, percentage_c, .init = redirect_all_std)
{
    my_printf("je fais du %c", 'c');
    cr_assert_stdout_eq_str("je fais du c");
}

Test(my_printf, percentage_s, .init = redirect_all_std)
{
    my_printf("j'ai froid, %s", "j'ai faim");
    cr_assert_stdout_eq_str("j'ai froid, j'ai faim");
}

Test(my_printf, percentage_u, .init = redirect_all_std)
{
    my_printf("j'ai %u d'euros", 3000000000);
    cr_assert_stdout_eq_str("j'ai 3000000000 d'euros");
}

Test(my_printf, percentage_x, .init = redirect_all_std)
{
    my_printf("%x", 56255);
    cr_assert_stdout_eq_str("dbbf");
}

Test(my_printf, percentage_X, .init = redirect_all_std)
{
    my_printf("%X", 56255);
    cr_assert_stdout_eq_str("DBBF");
}

Test(my_printf, percentage_percentage, .init = redirect_all_std)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf, percentage_b, .init = redirect_all_std)
{
    my_printf("%b", 15);
    cr_assert_stdout_eq_str("1111");
}

Test(my_printf, percentage_k, .init = redirect_all_std)
{
    my_printf("%k");
    cr_assert_stdout_eq_str("%k");
}

Test(my_printf, percentage_y, .init = redirect_all_std)
{
    my_printf("%y");
    cr_assert_stdout_eq_str("%y");
}

Test(my_printf, percentage_S, .init = redirect_all_std)
{
    my_printf("%S", 0);
    cr_assert_stdout_eq_str(NULL);
}
