#include <stddef.h>

void *memset(void *b, int c, size_t len)
{
    int i;
	
	i = 0;
	while(i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
	}
	((unsigned char *)b)[i] = 0;
	return (b);
}

int main()
{
	char 
}