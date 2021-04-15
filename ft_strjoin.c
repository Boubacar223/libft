/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 11:57:06 by bouattar          #+#    #+#             */
/*   Updated: 2021/04/14 11:50:45 by bouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str, const char *str2)
{
	size_t	i;
	size_t	i2;
	char	*res;

	i = 0;
	i2 = 0;
	if (!str || !str2)
		return (NULL);
	res = malloc(sizeof(char) * (ft_strlen(str) + ft_strlen(str2) + 1));
	if (res == NULL)
		return (NULL);
	while (i < ft_strlen(str))
	{
		res[i] = str[i];
		i++;
	}
	while (i2 < ft_strlen(str2))
	{
		res[i] = str2[i2];
		i++;
		i2++;
	}
	res[i] = '\0';
	return (res);
}
