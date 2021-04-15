/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouattar <bouattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 10:40:56 by bouattar          #+#    #+#             */
/*   Updated: 2021/04/07 11:52:52 by bouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc (size_t num, size_t size)

{
	void	*c;
	size_t	total;

	total = num * size;
	c = (void *)malloc(num * size);
	if (!c)
		return (NULL);
	ft_memset(c, 0, total);
	return (c);
}
