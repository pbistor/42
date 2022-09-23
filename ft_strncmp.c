/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:39:46 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/23 17:33:40 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int	truer;

	i = 0;
	truer = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			truer = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (truer);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char src[21]="holjhuytiyuyfiytaayfiy";
	char dest[20]="holzea";
	char array[5];
	unsigned int n;
	printf("%d", ft_strncmp(src, dest, 6));
	printf("%d", strncmp(src, dest, 6));
}*/
