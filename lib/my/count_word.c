/*
** EPITECH PROJECT, 2022
** minishell1
** File description:
** count_word
*/

int count_word(char const *str)
{
    int i = 0;
    int cpt = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ')
        cpt ++;
    i ++;
    }
    return (cpt);
}