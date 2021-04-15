/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:48:50 by bouattar          #+#    #+#             */
/*   Updated: 2021/04/08 16:46:42 by bouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *c, int a)
{
	int				i;
	unsigned char	*s;

	s = (unsigned char *)c;
	i = ft_strlen(c);
	while (i + 1 >= 0)
	{
		if (s[i] == (unsigned char)a)
			return ((char *)(c + i));
		i--;
	}
	return (NULL);
}
