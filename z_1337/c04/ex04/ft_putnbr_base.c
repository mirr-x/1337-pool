/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:46:29 by molahrac          #+#    #+#             */
/*   Updated: 2024/07/09 12:07:54 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *arr, int *nbr, unsigned int *to_unsignd)
{
	int	i;

	i = 0;
	if (*nbr < 0)
	{
		write(1, "-", 1);
		*nbr *= -1;
		*to_unsignd = *nbr;
	}
	else
	{
		*to_unsignd = *nbr;
	}
	while (arr[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_print_rev_arr(char arr_max_unsignd[], int j)

{
	j--;
	while (j != -1)
	{
		write(1, &arr_max_unsignd[j], 1);
		j--;
	}
}

int	ft_isrepeated(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j = 1 + i;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_checke_base_is_valid(char *base, int len)
{
	int	i;

	i = 0;
	if (base[0] == '\0' || len == 1)
	{
		return (0);
	}
	while (base[i] != '\0')
	{
		if (!(base[i] >= 32 && base[i] <= 126) 
			|| base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		i++;
	}
	if (ft_isrepeated(base) == 1)
	{
		return (0);
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char			arr_max_unsignd[33];
	char			conv;
	int				i;
	int				j;
	unsigned int	to_unsignd;

	i = ft_len(base, &nbr, &to_unsignd);
	j = 0;
	if (ft_checke_base_is_valid(base, i) == 0)
		return ;
	if (to_unsignd == 0)
		arr_max_unsignd[j++] = base[(to_unsignd % i)];
	while (to_unsignd)
	{
		conv = base[(to_unsignd % i)];
		to_unsignd /= i;
		arr_max_unsignd[j] = conv;
		j++;
	}
	ft_print_rev_arr(arr_max_unsignd, j);
}
