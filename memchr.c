/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:51:29 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/17 12:00:51 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i = 0;
    const char *str;
    str = (const char *)s;
	while (i < n)
	{
		if(str[i] == (char)c)
			return ((void *)s+i);
		i++;
	}
	 return 0;
}

int main()
{
	char cadena[20]= "hamaica mola";
	char *s = ft_memchr(cadena, 97, 10);
	printf("%s", s);
s = memchr(cadena, 97, 10);
	printf("%s", s);
}