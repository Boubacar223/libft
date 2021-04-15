/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouattar <bouattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 14:06:56 by bouattar          #+#    #+#             */
/*   Updated: 2021/04/14 11:50:24 by bouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

static char	*ft_copy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
		dst[i++] = '\0';
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;
	size_t	b;

	if (!s)
		return (NULL);
	b = ft_strlen(s) - start;
	if (len > b)
		len = b;
	c = ft_calloc(sizeof(char), 1);
	if (!c)
		return (NULL);
	if (start < ft_strlen(s))
	{
		free(c);
		c = ft_calloc(sizeof(char), len + 1);
		if (!c)
			return (NULL);
		c = ft_copy(c, s +start, len);
	}
	return (c);
}
