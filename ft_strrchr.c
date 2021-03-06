#include "libft.h"

/*
** Same as strchr only it finds the last occurence of c.
*/

char	*ft_strrchr(const char *s, int c)
{
	char		ch;
	const char	*res;

	ch = (char)c;
	res = NULL;
	while (*s)
	{
		if (*s == ch)
			res = s;
		s++;
	}
	return (*s == ch ? (char *)s : (char *)res);
}

// (NULL, 'c') - error