/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** my_sokoban
*/
#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include "./include/sokoban.h"
#include "./include/struct.h"

void for_find_p(char **arr, position_t *p, int i, int j)
{
    if (arr[i][j] == 'P') {
        p->y = j;
        p->x = i;
    }
}

char **find_pos_player(position_t *p, char **arr)
{
    for (int i = 0; arr[i] != NULL; i++) {
        for (int j = 0; arr[i][j] != '\0'; j++) {
            for_find_p(arr, p, i, j);
        }
    }
    return arr;
}

int clear_and_print(int m, int g, char **mp)
{
    if (m == 1) {
        clear();
        print_map(mp);
        refresh();
        return 0;
    }
    if (g == 1) {
        clear();
        print_map(mp);
        refresh();
        return 1;
    }
    return -1;
}

init_structs_t for_structs(init_structs_t str, char **av)
{
    str.pos = (position_t){0};
    str.msg = get_file_content(av[1]);
    str.tab = my_str_to_word_array(str.msg);
    str.mp = find_pos_player(&str.pos, str.tab);
    str.m = 0;
    str.n = 0;
    str.g = 0;
    str.value = 0;
    return str;
}

int main(int ac, char **av)
{
    for_errors(ac, av);
    init_structs_t str = for_structs(str, av);

    initscr();
    errors_characters(str.mp);
    while (1) {
        clear();
        print_map(str.mp);
        str.n = getch();
        click_top_and_down(str.n, &str.pos, str.mp);
        click_right_and_left(str.n, &str.pos, str.mp);
        if (str.n == 32)
            main(ac, av);
        str = win_and_lose(str);
        if (str.value != -1)
            return str.value;
        refresh();
    }
    endwin();
    return 0;
}