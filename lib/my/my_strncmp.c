/*
** EPITECH PROJECT, 2020
** B-CPE-100-LYN-1-1-cpoolday06-nicolas.suchier
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; s1[i] != n || s1[i] != '\0'; i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return (0);
}