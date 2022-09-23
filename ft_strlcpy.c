/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:05:30 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/23 16:26:18 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (dstsize == 0)
		return (j);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char src[60]="rffei";
	char dest[10];
	//printf("%lu", ft_strlcpy(dest , src, 0));
	//printf("%lu", strlcpy(dest , src, 0));
	strlcpy(dest , src, 3);
	//write(1, dest, 10);
	printf("%s", dest);
	//write(1, ft_strlcpy( dest,  src, 8), 8);
	
}*/
