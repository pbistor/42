int	isalpha(int c)
{	
		if (!((c >= 65 && c <= 90) || (c >= 97  && c <= 122)))
			return (0);
		
	return (1);
}
/*int main(void)
{
	char str[10]="gasAZf1";

	printf("%d", ft_str_is_alpha(96));

}*/
