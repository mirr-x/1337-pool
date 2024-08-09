/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:21:23 by molahrac          #+#    #+#             */
/*   Updated: 2024/07/15 02:59:23 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* +1 because the size will alwase need a 1 */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*ptr;

	i = 0;
	size = 0;
	if (min >= max)
	{
		return (NULL);
	}
	size = (max - min);
	ptr = malloc(size * 4);
	while (size)
	{
		ptr[i] = min;
		min++;
		i++;
		size--;
	}
	return (ptr);
}
