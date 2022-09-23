/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:34:18 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/23 15:53:45 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>
int main()
{
    char p[4] = "sos";
    *p = 1;
    char s[100] = "a veces me pregunto sobre el futuro venidero";

    void *u;
    u = ft_memcpy(((void *)0), ((void *)0), 3);

    printf("%s",u);



}*/
