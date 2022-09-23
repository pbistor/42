/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:21:52 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/23 17:28:46 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i = 0;

	while (s[i] != 0)
	{
		if(s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if(s[i] == (char)c)
			return ((char *)s + i);
	else return 0;
}
/*
int main()
{
	char cadena[20]= "hamaica mola";
	char *s = ft_strchr(cadena, 98);
	printf("%s", s);
s = strchr(cadena, 98);
	printf("%s", s);
}*/
