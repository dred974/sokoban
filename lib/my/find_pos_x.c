/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-guillaume.lallemand
** File description:
** find_pos_x
*/
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/struct.h"

int if_x(char **tab, int i, int j, int k)
{
    if (tab[i][j] == 'X')
        k++;
    return k;
}

int cpt_x(char **tab)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (tab[i] != NULL) {
        j = 0;
        while (tab[i][j] != '\0') {
            k = if_x(tab, i, j, k);
            j++;
        }
        i++;
    }
    return k;
}

void if_pos_x(char **arr, int i, pos_x_t *px, int m)
{
    for (int j = 0; arr[i][j] != '\0'; j++) {
        if (arr[i][j] == 'X') {
            px[m].x = i;
            px[m].y = j;
            m++;
        }
    }
}

pos_x_t *find_pos_x(char **arr)
{
    int m = 0;
    int n = cpt_x(arr);
    pos_x_t *px = malloc(sizeof(pos_o_t) * (n + 1));

    for (int i = 0; arr[i] != NULL; i++) {
        if_pos_x(arr, i, px, m);
    }
    px[m].x = -1;
    px[m].y = -1;
    return px;
}