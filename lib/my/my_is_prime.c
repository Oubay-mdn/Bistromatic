/*
** EPITECH PROJECT, 2020
** B-CPE-100-LYN-1-1-cpoolday05-nicolas.suchier
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    int out = 0;

    for (int i = 1; i <= nb; i++) {
        if (nb % i == 0)
            out++;
    }
    if (out == 2)
        return (1);
    else
        return (0);
}