/*
** EPITECH PROJECT, 2020
** B-CPE-100-LYN-1-1-cpoolday06-nicolas.suchier
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] != '\0') {
        if (s1[i] != s2[i]) {
            return (s2[i] - s1[i]);
        }
        i++;
    }
    return (0);
}