/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:00:33 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/23 19:21:03 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (start >= ft_strlen(s))
	{
		str = calloc(1, 1);
		return (str);
	}
	else if (len> ft_strlen(s) - start)
		str = malloc( ft_strlen(s) - start + 1);
	else
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while ((i < len) && s[start] != 0)
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}

#include <string.h>
int main()
{
	char *str = "i just want this part #############";
 	size_t size = 20;
 	char *ret = ft_substr(str, 5, size);
	if (!strncmp(ret, str + 5, size))
 	{
		printf ("succes\n");
	}
	//char *ret2 = substr(str, 5, size);
	printf("%s", ret);
	//printf("%s", ret2);

}

