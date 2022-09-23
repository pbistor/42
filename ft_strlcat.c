/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:51:23 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/23 15:32:16 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;

	k = 0;
	j = ft_strlen(src);
	i = ft_strlen(dst);
	len = i;
	if (dstsize == 0)
		return (j);
	while (src[k] != 0 && (k + len) < dstsize - 1)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = 0;
	if (dstsize > len)
		return (ft_strlen(src) + len);
	else
		return (dstsize + j);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{//printf("%zu\n" , 	ft_strlcat("pqrstuvwxyz", "abcd", 0));
	char cadena[120] = "there is no stars in the sky";
	char cadena2[100] = "the cake is a lie !\0I'm hidden lol\r\n";
	printf("%zu" , ft_strlcat(cadena2, cadena, 0));
	//printf("%d" , strlcat(cadena, cadena2, 4));

 //strlcat(cadena, cadena2, 11);
	printf("%s\n", cadena);
	//write(1, &cadena[0], 12);
	//printf("%d" , ft_strlcat(cadena, cadena2, 3));
}*/

