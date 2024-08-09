/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:09:39 by molahrac          #+#    #+#             */
/*   Updated: 2024/07/12 22:11:35 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	ruse;

	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else if (nb > 0)
	{
		ruse = nb * ft_recursive_power(nb, power - 1);
	}
	else
	{
		ruse = 0;
	}
	return (ruse);
}
