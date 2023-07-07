/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** move_obs
*/
#include "../../include/sokoban.h"
#include "../../include/struct.h"

void move_obs_top(position_t *p, char **arr)
{
    if (arr[p->x - 1][p->y] == 'X')
        arr[p->x - 2][p->y] = 'X';
}
