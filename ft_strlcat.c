/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:55:48 by bouattar          #+#    #+#             */
/*   Updated: 2021/04/08 12:38:45 by bouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t n)
{	
	size_t	i;
	size_t	j;
	size_t	d_length;
	size_t	s_length;

	s_length = ft_strlen(s);
	d_length = ft_strlen(d);
	j = d_length;
	i = 0;
	if (d_length < n - 1 && n > 0)
	{
		while (s[i] && d_length + i < n - 1)
		{	
			d[j] = s[i];
			j++;
			i++;
		}
		d[j] = 0;
	}
	if (d_length >= n)
		d_length = n;
	return (d_length + s_length);
}
