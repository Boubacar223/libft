/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:15:55 by bouattar          #+#    #+#             */
/*   Updated: 2021/04/14 11:49:36 by bouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *c, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!c || !f)
		return (NULL);
	i = 0;
	str = ft_strdup(c);
	if (!str)
		return (NULL);
	while (c[i])
	{
		str[i] = f(i, c[i]);
		i++;
	}
	return (str);
}
