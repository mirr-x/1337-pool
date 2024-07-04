/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:19:41 by molahrac          #+#    #+#             */
/*   Updated: 2024/06/27 00:36:18 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_printall(char i1, char i2, char i3)

{
	char	x1;
	char	x2;
	char	x3;

	x1 = i1 + 48;
	x2 = i2 + 48;
	x3 = i3 + 48;
	write(1, &x1, 1);
	write(1, &x2, 1);
	write(1, &x3, 1);
	if (i1 == 7 && i2 == 8 && i3 == 9)
	{
		return ;
	}
	write(1, ", ", 2);
}

void	ft_print_comb(void)

{
	int		i1;
	int		i2;
	int		i3;

	i1 = 0;
	i2 = 0;
	i3 = 0;
	while (i1 != 8)
	{
		i2 = i1 + 1;
		while (i2 != 9)
		{
			i3 = i2 + 1;
			while (i3 != 10)
			{
				ft_printall(i1, i2, i3);
				i3++;
			}
			i2++;
		}
		i1++;
	}
}
