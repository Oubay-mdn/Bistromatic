/*
** EPITECH PROJECT, 2020
** cpool
** File description:
** cpool
*/

int my_putstr(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        my_putchar(str[count]);
        count = count + 1;
    }
}
