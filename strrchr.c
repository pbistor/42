/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:34:59 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/17 11:47:03 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	int i = 0;
    int k = -1;
	while (s[i] != 0)
	{
		if(s[i] == (char)c)
			{
                k = i;
            }
		i++;
	}
	if(s[i] == (char)c)
			return (&s[i]);
    if (k!=-1) return (&s[k]);
    else return 0;

}

int main()
{
	char cadena[20]= "hamaica mola mazo";
	char *s = ft_strrchr(cadena, 97);
	printf("%s", s);
s = strrchr(cadena, 97);
	printf("%s", s);
}