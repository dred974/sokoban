/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** move_player_right
*/
#include "../../include/sokoban.h"
#include "../../include/struct.h"

void move_player_right(position_t *p, char **arr)
{
    int was_o = 0;

    if (arr[p->x][p->y + 1] == '\0')
        return;
    if (arr[p->x][p->y + 1] == '#')
        return;
    if (arr[p->x][p->y + 2] == '#' && arr[p->x][p->y + 1] == 'X')
        return;
    if (arr[p->x][p->y + 1] == 'X' && arr[p->x][p->y + 2] == 'X')
        return;
    was_o = (arr[p->x][p->y + 1] == 'O');
    arr[p->x][p->y] = (p->was_o == 1) ? 'O' : ' ';
    move_obs_right(p, arr);
    p->was_o = was_o;
    p->y += 1;
    arr[p->x][p->y] = 'P';
}