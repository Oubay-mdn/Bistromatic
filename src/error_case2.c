/*
** EPITECH PROJECT, 2020
** B-CPE-101-LYN-1-1-bistromatic-nicolas.suchier
** File description:
** error_case2
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "bistromatic.h"

void same_digit(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i + 1; str[j] != '\0'; j++) {
            same_digit2(str, i, j);
        }
    }
}

void same_digit2(char *str, int i, int j)
{
    if (str[j] == str[i]) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_READ);
    }
}

void same_op(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i + 1; str[j] != '\0'; j++) {
            same_op2(str, i, j);
        }
    }
}

void same_op2(char *str, int i, int j)
{
    if (str[j] == str[i]) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_READ);
    }
}