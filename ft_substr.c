/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:00:33 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/17 17:00:42 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i = 0;
	char *str;
	str = malloc(sizeof(char) * len + 1);
	if(!str)
		return NULL;
	
	i = start;
	while(i < len)
	{
		str[i++] = s[start++];

	}
	str[i] = 0;
	return str;
}
