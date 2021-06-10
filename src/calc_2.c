/*
** EPITECH PROJECT, 2020
** calc_2.c
** File description:
** second part of calc file
*/
int soustraction(char *, char *);
int addition(char *, char *);
int multiplication(char *, char *);
int mod(char *, char *);
int division(char *, char *);
void my_putchar(char c);
int my_put_nbr(int nb);

int define(char *buff, int sign, char *operators)
{
    if (sign == operators[3])
        return (soustraction(buff, operators));
    if (sign == operators[2])
        return (addition(buff, operators));
    if (sign == operators[4])
        return (multiplication(buff, operators));
    if (sign == operators[6])
        return (mod(buff, operators));
    if (sign == operators[5])
        return (division(buff, operators));
}

int evalexpr(char *buff, char *operators)
{
    char sign;
    for (int i = 0; buff[i] != '\0'; i++) {
        if (buff[i] == operators[2])
            sign = buff[i];
        if (buff[i] == operators[3])
            sign = buff[i];
        if (buff[i] == operators[4])
            sign = buff[i];
        if (buff[i] == operators[5])
            sign = buff[i];
        if (buff[i] == operators[6])
            sign = buff[i];
    }
    return (define(buff, sign, operators));
}