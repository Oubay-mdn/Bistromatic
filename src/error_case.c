/*
** EPITECH PROJECT, 2020
** B-CPE-101-LYN-1-1-bistromatic-nicolas.suchier
** File description:
** error_case
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "bistromatic.h"

void error_case(char *expr, char *base, char *op)
{
    unmatch_parent(expr);
    check_matching_op(base, op);
    same_digit(base);
    same_op(op);
    unknown_digit(expr, base);
    unknow_op(expr, op);
}

void check_matching_op(char *base, char *op)
{
    int j;

    for (int i = 0; base[i] != '\0'; i++) {
        j = 0;
        for (;op[j] != '\0'; j++)
            check_matching2(base, op, i, j);
    }
}

void check_matching2(char *base, char *op, int i, int j)
{
    if (base[i] == op[j]) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_READ);
    }
}

void unmatch_parent(char *str)
{
    int p = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(')
            p++;
        if (str[i] == ')')
            p--;
    }
    if (p != 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_READ);
    }
}