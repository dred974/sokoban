/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-guillaume.lallemand
** File description:
** find_pos_o
*/
#include "../../include/struct.h"
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

void if_o(char **tab, int i, int j, int k)
{
    if (tab[i][j] == 'O')
        k++;
}

int cpt_o(char **tab)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (tab[i] != NULL) {
        j = 0;
        while (tab[i][j] != '\0') {
            if_o(tab, i, j, k);
            j++;
        }
        i++;
    }
    return k;
}

void if_pos_o(char **arr, int i, pos_o_t *p, int m)
{
    int j;

    for (j = 0; arr[i][j] != '\0'; j++) {
        if (arr[i][j] == 'O') {
            p[m].x = i;
            p[m].y = j;
            m++;
        }
    }
    j = 0;
}

pos_o_t *find_pos_o(char **arr)
{
    int m = 0;
    int n = cpt_o(arr);
    pos_o_t *p = malloc(sizeof(pos_o_t) * n);

    for (int i = 0; arr[i] != NULL; i++) {
        if_pos_o(arr, i, p, m);
    }
    return p;
}