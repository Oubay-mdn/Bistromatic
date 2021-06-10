/*
** EPITECH PROJECT, 2020
** cpool
** File description:
** cpool
*/

int my_strlen(char const *str)
{
    int count = 0;

    while (str[count] != '\0')
        count = count + 1;
    return (count);
}
