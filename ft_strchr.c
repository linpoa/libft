#include "libft.h"
/*
** Returns a pointer to the first occurence of (char)c in the string s or NULL otherwise.
** c can be \0, then returns pointer to \0.
** strchr is defined in <string.h>. 
*/

char    *ft_strchr(const char *s, int c)
{
    char ch;

    ch = (char)c;
    while (*s && *s != ch)
        s++;
    return (*s == ch ? (char *)s : NULL);
}

/*
int     main(void)
{
    if (ft_strchr("strchr", 'r') == strchr("strchr", 'r'))
        printf("%s", "OK\n");
    if (ft_strchr("strchr", 'a') == strchr("strchr", 'a'))
        printf("%s", "OK\n");
    if (ft_strchr("strchr", '\0') == strchr("strchr", '\0'))
        printf("%s", "OK\n");
    if (ft_strchr("", '\0') == strchr("", '\0'))
        printf("%s", "OK\n");
    if (ft_strchr("two words", 'd') == strchr("two words", 'd'))
        printf("%s", "OK\n");
    if (ft_strchr("two\0words", '\0') == strchr("two\0words", '\0'))
        printf("%s", "OK\n");
    if (ft_strchr("strchr", 42) == strchr("strchr", 42))
        printf("%s", "OK\n");
    if (ft_strchr("strchr", 1000) == strchr("strchr", 1000))
        printf("%s", "OK\n");
    return (0);
}
*/

// https://stackoverflow.com/questions/2394011/why-does-strchr-take-an-int-for-the-char-to-be-found
// (NULL, 'c') - error