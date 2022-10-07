/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:51:23 by vprieto-          #+#    #+#             */
/*   Updated: 2022/10/07 10:39:21 by vprieto-         ###   ########.fr       */
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
