/*
** EPITECH PROJECT, 2020
** B-CPE-101-LYN-1-1-bistromatic-nicolas.suchier
** File description:
** help_f
*/

int help(void)
{
    my_putstr("USAGE\n");
    my_putstr("./calc base operators size_read\n");
    my_putchar('\n');
    my_putstr("DESCRIPTION\n");
    my_putstr("- base: all the symbols of the base\n");
    my_putstr("- operators: the symbols for the ");
    my_putstr("parentheses and the 5 operators\n");
    my_putstr("- size_read: number of characters to be read\n");
    exit (0);
}