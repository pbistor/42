/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:42:49 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/30 13:36:57 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isinset(char c, const char *set)
{
	int i;

	i = 0;
	while(set[i]!=0)
	{
		if (set[i] == c)
			return 1;
		i++;
	}
	return 0;
}
char *ft_strtrim(char const *s1, char const *set)
{

	int i = 0;
	int end = 0;
	
	int len = ft_strlen(s1);
	int strt =  len;
	if(!s1 || !set)
		return NULL;
	while (s1[i] != 0)
	{
		if (!ft_isinset(s1[i], set))
			{strt = i;
			break;}
 		i++;
	}
	i = len - 1;
	while (i > 0)
	{
		if (!ft_isinset(s1[i], set))
			{end = i;
			break;}
		i--;
	}
	//printf("start: %d, %d", strt,end);
	return ( ft_substr(s1, strt, end - strt + 1));
}
/*
int main()
{
	const char s1[] = "lorem ipsum dolor sit ameeeeeeet";
	printf("%s", ft_strtrim( "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ", " \n\t"));
}*/
