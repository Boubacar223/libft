/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:11:26 by bouattar          #+#    #+#             */
/*   Updated: 2021/04/01 15:27:19 by bouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *c, int a)
{
	char	*ptr;

	ptr = (char *)c;
	while (*ptr)
	{
		if (*ptr == (char)a)
			return (ptr);
		ptr++;
	}
	if (*ptr == '\0' && a == '\0')
		return (ptr);
	return (NULL);
}
