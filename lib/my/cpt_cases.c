/*
** EPITECH PROJECT, 2022
** minishell1
** File description:
** cpt_cases
*/
#include <unistd.h>
#include <stdlib.h>
#include "../../include/sokoban.h"

int cpt_cases(char **arr)
{
    int i = 0;
    int cpt = count_word(arr[i]);
    char *len = malloc(sizeof(char) * (cpt + 1));

    while (arr[i] != NULL) {
        if (len[i] == '\0')
            cpt++;
        i++;
    }
    return cpt;
}