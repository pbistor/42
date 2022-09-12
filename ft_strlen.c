/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:40:00 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/12 16:46:46 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
size_t ft_strlen(const char *s)
{
	int i;

	i = 0;

	while( s[i] != 0)
	{
		i++;
	}
	return i;
} 

int main()
{
	printf("%d" ,ft_strlen("golaa"));			
	printf("%d" , strlen("golaa"));			


}