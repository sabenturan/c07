#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*giz;
	int		a;
	int		b;
	int		c;

	giz = malloc(sizeof(strs));
	a = 0;
	b = 0;
	while (a < size)
	{
		c = 0;
		while (strs[a][c] != '\0')
			giz[b++] = strs[a][c++];
		c = 0;
		while (a != size - 1 && sep[c] != '\0')
			giz[b++] = giz[c++];
		a++;
	}
	giz[b] = '\0';
	return (giz);
}
