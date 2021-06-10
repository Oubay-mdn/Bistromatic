/*
** EPITECH PROJECT, 2020
** B-CPE-100-LYN-1-1-cpoolday05-nicolas.suchier
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int result = 1;

    if (nb == 0 || nb < 0)
        return (0);
    while (result * result != nb) {
        result++;
        if (result > nb)
            return (0);
    }
    return (result);
}
