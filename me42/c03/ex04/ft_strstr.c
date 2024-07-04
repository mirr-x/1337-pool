/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:30:18 by molahrac          #+#    #+#             */
/*   Updated: 2024/07/03 14:15:51 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)

{
	int	i;
	int	i2;
	int	flag;
	int	c;
	
	i = 0;
	i2 = 0;
	flag = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[i2])
		{
			c = i;
			i2 = 0;
			while (to_find[i2] != '\0')
			{
				if (to_find[i2] != str[c])
				{
					flag = 0;
					break;
				}
				c++;
				i2++;
			}
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 1)
	{
		return (to_find);;
	}
	else
	{
		return (NULL);
	}
}
