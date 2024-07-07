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

void	ft_check_if_nedel_in_haysatck(int *flag, char *str, char *tr, int c)

{
	int	i2;

	i2 = 0;
	while (tr[i2] != '\0')
	{
		if (tr[i2] != str[c])
		{
			*flag = 0;
			return ;
		}
		c++;
		i2++;
	}
	*flag = 1;
}

char	*ft_strstr(char *str, char *to_find)

{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			ft_check_if_nedel_in_haysatck(&flag, str, to_find, i);
			if (flag == 1)
			{
				break ;
			}
		}
		i++;
	}
	if (flag == 1)
		return (str + i);
	else
		return (NULL);
}
