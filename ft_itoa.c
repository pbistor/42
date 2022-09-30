/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:16:36 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/30 19:18:37 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_calclen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
/*
int ft_flip(int n)
{
	if(n == -2147483648)
	{
		n = 2147483647;
	}
	if (n<0)
	{
		n *= -1;
	}
}*/

char *ft_itoa(int n)
{
	int	i;
	char *str;
	int len;
	long num;

	num = n;
	len = ft_calclen(n);
	i = 0;
	if(num < 0)
		num *= -1;
	str = ft_calloc(len + 1, sizeof(char));
	if(!str)
		return (0);
	if (n < 0)
		str[0] = '-';
	len--;
	while (len >= 0 && str[len] != '-')
	{
		str[len--] += (num % 10) + '0' ;
		num = num/10;
	}
	return str;
}
/*
int main()
{
	printf("%s" , ft_itoa(-2147483648));
	char *s = ft_itoa(-2147483648);
	//write(1, &s[0] , 10);

}*/


