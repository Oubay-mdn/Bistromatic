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

char *my_revstr(char *str)
{
    char temp;
    int b = 0;

    for (int i = my_strlen(str) - 1; i >= b; i--) {
        temp = str[i];
        str[i] = str[b];
        str[b] = temp;
        b++;
    }
    return (str);
}
