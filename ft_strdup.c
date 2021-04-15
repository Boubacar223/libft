/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouattar <bouattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 12:50:07 by bouattar          #+#    #+#             */
/*   Updated: 2021/03/31 11:24:17 by bouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char	*ft_strdup(const char *src )
{
	size_t	a;
	size_t	b;
	char	*res;

	a = 0;
	b = 0;
	while (src[a])
	{
		a++;
	}
	res = malloc(sizeof(char) * a + 1);
	if (res == NULL)
		return (NULL);
	while (src[b] != '\0')
	{
		res[b] = src[b];
		b++;
	}
	res[b] = '\0';
	return (res);
}
