/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:32:09 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/23 17:52:10 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	neg;

	i = 0;
	j = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i]!=0)
	{
		j *= 10;
		j += str[i] - '0';
		i++;
	}
	return (j * neg);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[14]="  2  ";
    printf("%d\n", ft_atoi(str));
    printf("%d", atoi(str));
}*/
