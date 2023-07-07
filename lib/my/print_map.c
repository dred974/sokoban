/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-guillaume.lallemand
** File description:
** print_map
*/
#include <ncurses.h>
#include <stdlib.h>

void print_map(char **mp)
{
    for (int i = 0; mp[i] != NULL; i++) {
        printw("%s\n", mp[i]);
    }
}