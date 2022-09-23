/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:42:49 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/23 12:06:17 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(char const *s1, char const *set)
{
	char *p;
	int i = 0;
	int j = 0;
	int end;
	int strt =  -1;
	int len = strlen(s1);
	while (s1[i] != 0 && strt == -1)
	{
		j = 0;
		while(set[j]!= 0)
		{
			if(set[j] != s1[i] && set[j] != 0)	
			j++;
			else if (set[j] == 0)
			{
				strt = i;
				break;
			}
		}
		i++;
	}
	i = 0;
	while (i > 0 && end = -1)
	{
		j = 0;
		while(set[j]!= 0)
		{
			if(set[j] != s1[i] && set[j] != 0)	
			j++;
			else if (set[j] == 0)
			{
				end = i;
				break;
			}
		}
		i--;
	}
	ft_substr();
}
