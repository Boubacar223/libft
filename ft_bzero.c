/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 12:07:13 by bouattar          #+#    #+#             */
/*   Updated: 2021/04/07 11:47:16 by bouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *c, size_t n)
{
	size_t	a;
	char	*ptr;

	ptr = c;
	a = 0;
	while (a < n)
	{
		ptr[a] = 0;
		a++;
	}
}