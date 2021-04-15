/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 16:18:45 by bouattar          #+#    #+#             */
/*   Updated: 2021/04/07 11:49:17 by bouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	int	i;

	if (!d & !s)
		return (NULL);
	if (d > s)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			*(char *)(d + i) = *(char *)(s + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			*(char *)(d + i) = *(char *)(s + i);
			i++;
		}
	}
	return (d);
}
