/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:06:32 by molahrac          #+#    #+#             */
/*   Updated: 2024/07/15 02:13:27 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_get_total_size(char **arr2d, int size, char *sep)
{
	int	i;
	int	total_size;

	i = 0;
	total_size = 0;
	while (i != size)
	{
		total_size += ft_len(arr2d[i]);
		if (i != (size - 1))
		{
			total_size += ft_len(sep);
		}
		i++;
	}
	return (total_size);
}

void	fz_strcpy(char *dst, char *src, int *indx_dst)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[*indx_dst] = src[i];
		i++;
		(*indx_dst)++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_size;
	char	*rus_str;
	int		i_rus;

	if (size == 0)
	{
		rus_str = malloc(1);
		rus_str[0] = '\0';
		return (rus_str);
	}
	total_size = ft_get_total_size(strs, size, sep);
	rus_str = malloc(total_size + 1);
	i = 0;
	i_rus = 0;
	while (i != size)
	{
		fz_strcpy(rus_str, strs[i], &i_rus);
		if (i != (size - 1))
			fz_strcpy(rus_str, sep, &i_rus);
		i++;
	}
	rus_str[i_rus] = '\0';
	return (rus_str);
}

/*
#include <stdio.h>
int main()
{
	char *d2arr[] = {
		"hel",
		"ven",
		"zi"
	};
	// int r = ft_get_total_size(d2arr, 3,", ");
	char *str = ft_strjoin(3,d2arr,", ");
	printf("%s\n",str);
	
}
*/