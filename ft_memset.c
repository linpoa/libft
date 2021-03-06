#include "libft.h"

/*
** Writes len bytes of value c (converted to an unsigned char) to the string b
** and returns pointer to b.
** memset is defined in <string.h>.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *tmp;

	if (len)
	{
		tmp = (unsigned char *)b;
		while (len--)
			*tmp++ = (unsigned char)c;
	}
	return (b);
}

// (NULL, 'C', 0) - no error, return NULL
// (NULL, 'C', 3) - error
// (b, 'C', 0) - no error, return b