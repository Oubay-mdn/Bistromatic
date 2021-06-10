/*
** EPITECH PROJECT, 2020
** B-CPE-100-LYN-1-1-cpoolday05-nicolas.suchier
** File description:
** my_find_prime_sup
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int res = my_is_prime(nb);

    if (res == 1)
        return (nb);
    else {
        while (my_is_prime(nb) == 0) {
            nb++;
        }
        return (nb);
    }
}