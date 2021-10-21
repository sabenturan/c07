#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*giz;
	int	a;

	if (min >= max)
		return (0);
	giz = (int *)malloc(sizeof(int) * (max - min));
	a = 0;
	while (min < max)
	{
		giz[a] = min;
		a++;
		min++;
	}
	return (giz);
}
