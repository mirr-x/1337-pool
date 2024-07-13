/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 10:45:45 by molahrac          #+#    #+#             */
/*   Updated: 2024/07/12 22:24:11 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = nb;
	while (tmp != 0)
	{
		if ((i * i) == nb)
		{
			return (i);
		}
		i++;
		tmp--;
	}
	return (0);
}
