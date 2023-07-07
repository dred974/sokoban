/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** move_player_top
*/
#include "../../include/sokoban.h"
#include "../../include/struct.h"

void move_player_top(position_t *p, char **arr)
{
    int was_o = 0;

    if (arr[p->x - 1][p->y] == '#')
        return;
    if (arr[p->x - 2][p->y] == '#' && arr[p->x - 1][p->y] == 'X')
        return;
    if (arr[p->x - 1][p->y] == 'X' && arr[p->x - 2][p->y] == 'X')
        return;
    was_o = (arr[p->x - 1][p->y] == 'O');
    arr[p->x][p->y] = (p->was_o == 1) ? 'O' : ' ';
    move_obs_top(p, arr);
    p->was_o = was_o;
    p->x -= 1;
    arr[p->x][p->y] = 'P';
}
