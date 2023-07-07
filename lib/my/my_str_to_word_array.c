/*
** EPITECH PROJECT, 2021
** my str to word array
** File description:
** str to array
*/

#include <stdlib.h>
#include <stdio.h>

int my_countword(char const *str)
{
    int i = 0;
    int cpt = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            cpt ++;
        i++;
    }
    return (cpt + 1);
}

char **my_malloctab(char const *str, char **side)
{
    int i = 0;
    int compt = 0;
    int wordlen = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n') {
            side[compt] = malloc(sizeof(char) * (wordlen + 1));
            compt++;
            wordlen = -1;
        }
        i++;
        wordlen ++;
    }
    side[compt] = malloc(sizeof(char) * (wordlen + 1));
    side[compt + 1] = NULL;
    return (side);
}

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int wordlen = 0;
    int compt = 0;
    int s = my_countword(str);
    char **side = malloc(sizeof(char*) * (s + 1));

    side = my_malloctab(str, side);
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            side [compt++][wordlen] = '\0';
            wordlen = 0;
            i++;
            continue;
        }
        side[compt][wordlen++] = str[i++];
    }
    side[compt ++][wordlen] = '\0';
    side[compt] = NULL;
    return (side);
}