/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:36:12 by molahrac          #+#    #+#             */
/*   Updated: 2024/07/10 15:57:41 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ruse;
	int	i;

	i = 0;
	ruse = 1;
	while (nb)
	{
		ruse = nb * ruse;
		nb--;
	}
	return (ruse);
}
