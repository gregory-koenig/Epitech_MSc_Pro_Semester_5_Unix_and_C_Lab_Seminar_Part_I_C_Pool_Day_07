/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** Concatenates two strings
*/

char *my_strcat(char *dest, char const *src)
{
    int count = my_strlen(dest);

    for (int i = 0; src[i] != '\0'; i++)
        dest[count + i] = src[i];
    return (dest);
}
