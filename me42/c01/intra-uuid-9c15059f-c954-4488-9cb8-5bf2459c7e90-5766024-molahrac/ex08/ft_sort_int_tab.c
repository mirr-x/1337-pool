/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:04:16 by molahrac          #+#    #+#             */
/*   Updated: 2024/06/28 11:17:56 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *tab, int x1, int *boll)

{
	int	temp;

	temp = tab[x1];
	tab[x1] = tab[x1 + 1];
	tab[x1 + 1] = temp;
	*boll = 1;
}

void	ft_sort_int_tab(int *tab, int size)

{
	int	i;
	int	j;
	int	bol;
	int	is;

	i = 0;
	is = 0;
	j = size - 1;
	bol = 0;
	while (i <= j)
	{
		while (is != j)
		{
			if (tab[is] > tab[is + 1])
				ft_swap(tab, is, &bol);
			is++;
		}
		if (bol == 0)
			return ;
		bol = 0;
		is = 0;
		i++;
	}
}
