/*
** EPITECH PROJECT, 2020
** lib
** File description:
** my_str_isalpha
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
            return (0);
        i++;
    }
    return (1);
}
