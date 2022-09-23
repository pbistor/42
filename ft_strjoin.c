#include <stddef.h>
char *ft_strjoin(char const *s1, char const *s2)
{

	size_t i;
	size_t j;
	char *str;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	str = malloc ((j + i + 1) * sizeof(char));
	i = 0;
	j = 0;
	while(s1[i] != 0)
	{
		str[i] = s1[i];
		i++;
	}

	while(s2[j] != 0)
	{
		str[i++] = s2[j++]; 
	}
	return str;
}

int main(void)
{
	char cadena[10] = "afma";
	char cadena2[10] = "jsjsj";
	char *p;

	printf("%s", ft_strjoin(cadena, cadena2));
}
