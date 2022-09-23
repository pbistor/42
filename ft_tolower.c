/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:15:56 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/23 16:53:52 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
	if (c >= 65 && c < 91)
		c = c + 32;
	return (c);
}
/*
int main(void)
{
	char  c;
	int i;
	i = 69;
	c = (char)i;
	printf("%c", c);

 	c=tolower(c);
	printf("%c", c);

}
*/
