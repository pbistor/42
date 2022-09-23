/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:51:03 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/17 15:58:22 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
char *strdup(const char *s1)
{
	size_t len;
	char *p;

	len = ft_strlen(s1) + 1;
	p =  malloc (len * sizeof(char));
	if (!p)
		return NULL;
	p = memcpy(p, s1, len);
	return p;

}
