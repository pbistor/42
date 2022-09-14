#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
    size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
	
		i++;
	}
}
/*
int main()
{
	int i = 0;
	void *a;
	//a = (void *)malloc (sizeof(49)*4); 
	ft_bzero(a, 20);
	while (i < 23)
	{
		//write(1, &a[i], 1);
		i++;
	}
}*/