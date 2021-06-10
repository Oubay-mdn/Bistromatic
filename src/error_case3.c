/*
** EPITECH PROJECT, 2020
** B-CPE-101-LYN-1-1-bistromatic-nicolas.suchier
** File description:
** error_case3
*/

#include "bistromatic.h"

void unknown_digit(char *str, char *base)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            check_digit(str[i], base);
    }
}

void check_digit(char s, char *base)
{
    for (int i = 0; base[i] != '\0';) {
        if (base[i] != s)
            i++;
        if (base[i] == s)
            return (1);
    }
    my_putstr(SYNTAX_ERROR_MSG);
    exit(EXIT_READ);
}

void unknow_op(char *str, char *op)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (!(str[i] >= '0' && str[i] <= '9'))
            check_op(str[i], op);
    }
}

void check_op(char s, char *op)
{
    for (int i = 0; op[i] != '\0';) {
        if (op[i] != s)
            i++;
        if (op[i] == s)
            return (1);
    }
    my_putstr(SYNTAX_ERROR_MSG);
    exit(EXIT_READ);
}