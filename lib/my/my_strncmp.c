/*
** EPITECH PROJECT, 2021
** B-BOO-101-RUN-1-1-phoenixd02-guillaume.lallemand
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (i != n) {
        if (s1[i] < s2[i])
            return -1;
        if (s1[i] > s2[i])
            return 1;
        i++;
    }
    return 0;
}