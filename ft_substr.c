/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:00:33 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/23 19:41:56 by vprieto-         ###   ########.fr       */
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
		str = ft_calloc(1, sizeof(char));
		return (str);
	}
	else if (len + start > ft_strlen(s))
		str = malloc(sizeof(char) * (ft_strlen(s) - ((int)start) + 1));
	else
		str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while ((i < len) && s[start] != 0)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
/*
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
*/
