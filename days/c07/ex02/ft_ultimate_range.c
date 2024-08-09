/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:36:00 by molahrac          #+#    #+#             */
/*   Updated: 2024/07/14 12:57:36 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*ptr;
	int	tmp;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tmp = size;
	ptr = malloc(size * 4);
	while (tmp)
	{
		ptr[i] = min;
		min++;
		tmp--;
		i++;
	}
	*range = ptr;
	return (size);
}
