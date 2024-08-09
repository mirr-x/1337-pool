/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 00:53:19 by molahrac          #+#    #+#             */
/*   Updated: 2024/06/27 07:33:47 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printall(int xa)

{
	char	f1;
	char	f2;

	f1 = (xa / 10) + 48;
	f2 = (xa % 10) + 48;
	write(1, &f1, 1);
	write(1, &f2, 1);
}

void	ft_print_comb2(void)
{
	int		xa;
	int		xb;

	xa = 0;
	xb = 0;
	while (xa <= 99)
	{
		xb = xa + 1; 
		while (xb <= 99)
		{
			ft_printall(xa);
			write(1, " ", 1);
			ft_printall(xb);
			if (xa != 98 || xb != 99)
			{
				write(1, ", ", 2);
			}
			xb++;
		}
		xa++;
	}
}
