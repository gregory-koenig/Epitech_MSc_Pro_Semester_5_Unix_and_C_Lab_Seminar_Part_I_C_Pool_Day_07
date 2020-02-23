/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** CPool Day07 Task02
*/

int get_strlen(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
        count++;
    return (count);
}

char *my_strcat(char *dest, char const *src)
{
    int count = get_strlen(dest);

    for (int i = 0; src[i] != '\0'; i++)
        dest[count + i] = src[i];
    return (dest);
}