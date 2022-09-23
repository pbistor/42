/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:32:55 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/23 17:50:38 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	int		k;
	char	*to_find;
	char	*str;
	to_find = (char *) needle;
	str = (char *) haystack;
	i = 0;
	j = 0;
	k = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != 0 && i < len)
	{
        k = i;
		j = 0;
		while (str[i] == to_find[j])
		{
			if (to_find[j+1] == 0)
				return (&str[k]);
			i++;
			j++;
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char src[21]="cahoolcaljholhuytiyy";
	char dest[20]="holh";
	char array[5];
	unsigned int n;
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("%s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
}
*/
