/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 09:00:07 by molahrac          #+#    #+#             */
/*   Updated: 2024/07/01 09:38:23 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
