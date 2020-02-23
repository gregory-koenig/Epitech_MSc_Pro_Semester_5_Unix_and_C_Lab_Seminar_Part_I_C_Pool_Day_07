/*
** EPITECH PROJECT, 2019
** my_strtncat
** File description:
** CPool Day07 Task03
*/

int get_strlen(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
        count++;
    return (count);
}

char *my_strncat(char *dest, char const *src, int nb)
{
    int count = get_strlen(dest);

    for (int i = 0; i <= nb; i++)
        dest[count + i] = src[i];
    return (dest);
}