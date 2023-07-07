/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** sokoban
*/
#include "struct.h"

#ifndef SOKOBAN_H_
    #define SOKOBAN_H_

int my_strlen(char const *str);
int cpt_cases(char **arr);
int count_word(char const *str);
char **my_str_to_word_array(char const *str);
void move_player_top(position_t *p, char **arr);
void move_player_down(position_t *p, char **arr);
void move_player_right(position_t *p, char **arr);
void move_player_left(position_t *p, char **arr);
void move_obs_top(position_t *p, char **arr);
void move_obs_down(position_t *p, char **arr);
void move_obs_right(position_t *p, char **arr);
void move_obs_left(position_t *p, char **arr);
void click_top_and_down(int n, position_t *pos, char **arr);
void click_right_and_left(int n, position_t *pos, char **arr);
int game_over(char **arr);
pos_o_t *find_pos_o(char **arr);
int you_win(char **map);
pos_x_t *find_pos_x(char **arr);
int cpt_x(char **tab);
int cpt_o(char **tab);
char *get_file_content(char const *filepath);
void print_map(char **mp);
int my_strncmp(char const *s1, char const *s2, int n);
int my_putstr(char const *str);
void my_putchar(char c);
void for_usage(void);
void errors_characters(char **arr);
void for_errors(int ac, char **av);
char **display_o(char **arr, pos_o_t *po);
init_structs_t win_and_lose(init_structs_t str);
void move_player(init_structs_t str);
int clear_and_print(int m, int g, char **mp);

#endif /* !SOKOBAN_H_ */
