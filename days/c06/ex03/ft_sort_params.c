/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:53:19 by molahrac          #+#    #+#             */
/*   Updated: 2024/07/11 12:11:57 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmpr(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_bubel_sort(char **arr_str, int siz)
{
	int		i;
	int		j;
	int		lab;
	char	*temp;

	i = 1;
	while (i != siz)
	{
		j = 1;
		while (j != (siz - 1))
		{
			lab = ft_strcmpr(arr_str[j], arr_str[j + 1]);
			if (lab > 0)
			{
				temp = arr_str[j];
				arr_str[j] = arr_str[j + 1];
				arr_str[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	ft_bubel_sort(av, ac);
	while (i != ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
