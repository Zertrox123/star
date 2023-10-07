/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-star-omar.joudi
** File description:
** star relation_bis.c
*/

void middle1_bis(int stage, int space)
{
    my_putstr("*");
    for (int j = stage - 2; j != 0; j--) {
        my_putstr(" ");
    }
    my_putstr("*");
    for (int j = space; j != 0; j--) {
        my_putstr(" ");
    }
}

void middle2_bis(int stage, int space)
{
    my_putstr("*");
    for (int j = stage - 2; j != 0; j--) {
        my_putstr(" ");
    }
    my_putstr("*");
    for (int j = space; j != 0; j--) {
        my_putstr(" ");
    }
}

void top_bis(int size)
{
    int count = size * 2;
    int space = (size -2) * 2 + 1;

    my_putstr("\n");
    for (int i = size - 1; i != 0; i--) {
        for (int j = count; j != 0; j--) {
            my_putstr(" ");
        }
        my_putstr("*");
        for (int j = space; j != 0; j--) {
            my_putstr(" ");
        }
        my_putstr("*");
        for (int j = count; j != 0; j--) {
            my_putstr(" ");
        }
        count = count + 1;
        space = space - 2;
        size--;
        if (space != -1) {
            my_putstr("\n");
        }
    }
}
