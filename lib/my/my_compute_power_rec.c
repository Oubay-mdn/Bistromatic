/*
** EPITECH PROJECT, 2020
** B-CPE-100-LYN-1-1-cpoolday05-nicolas.suchier
** File description:
** my_compute_power_rec
*/

int my_compute_power_rec(int nb, int p)
{
    long out = nb;

    if (p < 0 || out > 2147483647)
        return (0);
    if (p == 1)
        return (nb);
    if (p == 0)
        return (1);
    out = nb * my_compute_power_rec(nb, p - 1);
    return (out);
}
