/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:34:59 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/23 17:25:03 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i = 0;
    int k = -1;
	while (s[i] != 0)
	{
		if(s[i] == (char)c)
			{
                k = i;
            }
		i++;
	}
	if(s[i] == (char)c)
			return ((char *)s + i);
    if (k!=-1) return ((char *)s + k);
    else return 0;

}
/*
int main()
{
	char cadena[20]= "hamaica mola mazo";
	char *s = ft_strrchr(cadena, 97);
	printf("%s", s);
s = strrchr(cadena, 97);
	printf("%s", s);
}*/
