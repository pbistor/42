#include <stddef.h>

void *ft_memcpy(void *dest, void *src, size_t n)
{
    size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	
		i++;
	}
    return (dest);
}

int main()
{
    char p[4] = "sos";
    *p = 1;
    char s[100] = "a veces me pregunto sobre el futuro venidero";

    void *u;
    u = ft_memcpy(p, s, 20);

    printf("%s",u);



}