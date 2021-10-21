#include <stdlib.h>

char	*ft_strcpy(char *a, char *b)
{
	int	q;
	int	w;

	q = 0;
	w = 0;
	while (b[w] != '\0')
	{
		a[q] = b[w];
		q++;
		w++;
	}
	a[q] = '\0';
	return (a);
}

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (*str != '\0')
	{
		a++;
		str++;
	}
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*giz;
	int		i;

	i = ft_strlen(src);
	giz = (char *)malloc(sizeof(*giz) * (i + 1));
	giz = ft_strcpy(giz, src);
	return (giz);
}
