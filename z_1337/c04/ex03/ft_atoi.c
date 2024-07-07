/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:34:55 by molahrac          #+#    #+#             */
/*   Updated: 2024/07/05 11:25:42 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	from 9 to 13   we have ‘ ’ , \f , \n , \r , \t , \v  |  32 is space
*/

void	skip_spacese(char *str, int *i, int *xsign)
{
	while (str[*i] <= 32)
	{
		(*i)++;
	}
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
		{
			(*xsign)++;
		}
		(*i)++;
	}
}

int	ft_atoi(char *str)

{
	int	i;
	int	sign;
	int	xsign;
	int	ruse;

	i = 0;
	sign = 1;
	xsign = 0;
	ruse = 0;
	skip_spacese(str, &i, &xsign);
	while (str[i] >= '0' && str[i] <= '9')
	{
		ruse *= 10;
		ruse += (str[i] - '0');
		i++;
	}
	if ((xsign % 2) == 1)
	{
		ruse = ruse * -1;
	}
	return (ruse);
}
