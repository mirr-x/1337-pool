/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:35:47 by molahrac          #+#    #+#             */
/*   Updated: 2024/07/17 23:21:53 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	z_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*z_strdup(char *str)
{
	int		i;
	int		ln;
	char	*ptr;

	i = 0;
	ln = z_len(str);
	ptr = malloc(ln + 1);
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*ptr;

	i = 0;
	ptr = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	while (i != ac)
	{
		ptr[i].size = z_len(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = z_strdup(av[i]);
		i++;
	}
	ptr[i].size = 0;
	ptr[i].str = NULL;
	ptr[i].copy = NULL;
	return (ptr);
}
