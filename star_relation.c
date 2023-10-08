/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-star-omar.joudi
** File description:
** star_relation.c
*/

void bar_middle(int size)
{
    for (int j = (size * 2 + 1); j != 0; j--) {
        my_putstr("*");
    }
    for (int j = (size -2) * 2 + 1; j != 0; j--) {
        my_putstr(" ");
    }
    for (int j = (size * 2 + 1); j != 0; j--) {
        my_putstr("*");
    }
}

void middle2(int size, int stage, int space)
{
    int spacee = space - 2;
    int stagee = stage + 4;

    for (int i = size - 1; i != 0; i--) {
        for (int j = spacee; j != 0; j--) {
            my_putstr(" ");
        }
        middle2_bis(stagee, spacee);
        my_putstr("\n");
        stagee = stagee + 2;
        spacee--;
    }
    bar_middle(size);
    top_bis(size);
}

void middle1(int size)
{
    int space = 1;
    int size_all = 2 * (size * 2 + 1) + (size -2) * 2 + 1;
    int stage = size_all - 2;

    my_putstr("\n");
    for (int i = size; i != 0; i--) {
        for (int j = space; j != 0; j--) {
            my_putstr(" ");
        }
        middle1_bis(stage, space);
        my_putstr("\n");
        stage = stage - 2;
        space++;
    }
    middle2(size, stage, space);
}

void top(int count, int space, int size)
{
    for (int i = size - 1; i != 0; i--){
        for (int j = count - 1; j != 0; j--) {
            my_putstr(" ");
        }
        my_putstr("*");
        for (int j = space; j != 0; j--) {
            my_putstr(" ");
        }
        my_putstr("*");
        space = space + 2;
        my_putstr("\n");
        count--;
    }
}

void star_relation(int size)
{
    int count = size * 3 - 1;
    int space = 1;

    for (int i = count; i != 0; i--) {
        my_putstr(" ");
    }
    my_putstr("*");
    my_putstr("\n");
    top(count, space, size);
    bar_middle(size);
    middle1(size);
    top_bis(space, space, size);
    for (int i = count; i != 0; i--) {
        my_putstr(" ");
    }
    my_putstr("*");
}
