/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-star-omar.joudi
** File description:
** star.c
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        *str++;
    }
}

void star(unsigned int size)
{
    if (size == 0 || size < 0) {
        return;
    }
    if (size == 1) {
        my_putstr("   *\n*** ***\n *   *\n*** ***\n   *$");
    } else {
        star_relation(size);
    }
}

void main(void) {
    star(5);
}