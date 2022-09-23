/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:41:12 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/17 15:50:43 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void *calloc(size_t count, size_t size)
{
	void *p;

	p = malloc (count * size);
	if (!p)
		return NULL;
	 ft_bzero(p, size);
	return p;
}
