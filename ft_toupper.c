/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:08:38 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/23 16:46:05 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
		if (c >= 97 && c < 123)
			c = c - 32;

	return (c);
}
/*
int main(void)
{
	char  c;
	int i;
	i = 99;
	c = (char)i;
	printf("%c", c);

 	c=toupper(c);
	printf("%c", c);

}
*/
