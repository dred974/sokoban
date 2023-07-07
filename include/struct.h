/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** struct
*/
#include <stdio.h>

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct position {
    size_t x;
    size_t y;
    int pos;
    int was_o;
    int was_o_x;
}position_t;

typedef struct pos_o_s {
    int x;
    int y;
}pos_o_t;

typedef struct pos_x_s {
    int x;
    int y;
}pos_x_t;

typedef struct init_structs_s {
    char *msg;
    char **tab;
    char **mp;
    int m;
    int n;
    int g;
    int value;
    position_t pos;
}init_structs_t;


#endif /* !STRUCT_H_ */
