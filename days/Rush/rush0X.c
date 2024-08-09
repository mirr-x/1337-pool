/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:33:29 by molahrac          #+#    #+#             */
/*   Updated: 2024/06/30 15:53:50 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firs_line(int a, int *i)
{
	ft_putchar('A');
	if (a > 1)
	{
		while (*i < a - 2)
		{
			ft_putchar('B');
			(*i)++;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	body(int *i, int b, int a)
{
	int	j;

	j = 0;
	while (j < b - 2)
	{
		ft_putchar('B');
		*i = 0;
		if (a > 1)
		{
			while (*i < a - 2)
			{
				ft_putchar(' ');
				(*i)++;
			}
			ft_putchar('B');
		}
		ft_putchar('\n');
		j++;
	}
}

void	last_line(int *b, int *a, int *i)
{
	if (*b > 1)
	{
		ft_putchar('A');
		*i = 0;
		if (*a > 1)
		{
			while (*i < *a - 2)
			{
				ft_putchar('B');
				(*i)++;
			}
			ft_putchar('C');
		}
		ft_putchar('\n');
	}
}

void	rush(int a, int b)
{
	int	i;

	i = 0;
	if (a < 1 || b < 1)
		return ;
	firs_line(a, &i);
	body(&i, b, a);
	last_line(&b, &a, &i);
}
