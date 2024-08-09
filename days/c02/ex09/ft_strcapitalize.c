/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 09:51:32 by molahrac          #+#    #+#             */
/*   Updated: 2024/07/02 10:18:19 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ispeshel(char x)

{
	if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
	{
		return (1);
	}
	else if (x >= '0' && x <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)

{
	int	i;
	int	x;
	int	c;

	i = 0;
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] = str[x] + 32;
		x++;
	}
	while (str[i] != '\0')
	{
		c = ft_ispeshel(str[i - 1]) == 0;
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		else if (c && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
