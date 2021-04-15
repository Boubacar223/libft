/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 16:01:15 by bouattar          #+#    #+#             */
/*   Updated: 2021/04/14 11:48:51 by bouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nb(int n)
{
	int		i;
	long	nb;

	i = 0;
	nb = n;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static	char	*ft_treat_nb(long nb)
{
	char	*convert;
	size_t	i;

	i = (int)len_nb(nb);
	convert = malloc(sizeof(char) * i + 1);
	if (!convert)
		return (NULL);
	convert[i--] = '\0';
	if (nb == 0)
	{
		convert[0] = 48;
		return (convert);
	}
	if (nb < 0)
	{
		nb *= -1;
		convert[0] = '-';
	}
	while (nb > 0)
	{
		convert[i--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (convert);
}

char	*ft_itoa(int n)
{
	char	*convert;
	long	nb;

	nb = n;
	convert = ft_treat_nb(nb);
	if (!convert)
		return (NULL);
	return (convert);
}
