/*
** EPITECH PROJECT, 2019
** my_print_params
** File description:
** CPool Day07 Task04
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

void my_print_params(int argc, char **argv)
{
    for (int i = 0; i <= argc - 1; i++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
}

int main(int argc, char **argv)
{
    my_print_params(argc, argv);
    return (0);
}