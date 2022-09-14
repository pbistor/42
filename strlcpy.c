#include <stddef.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t 	i;
	size_t  j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	if (dstsize == 0)
		dst[0] = '\0';
	return (j);
}

int main(void)
{
	char src[6]="holaa";
	char dest[10];
	printf("%lu", strlcpy(dest , src, 3));
	printf("%lu", ft_strlcpy(dest , src, 3));
	ft_strlcpy(dest , src, 3);
	write(1, dest, 10);
	//printf("%s", dest);
	//write(1, ft_strlcpy( dest,  src, 8), 8);
	
}