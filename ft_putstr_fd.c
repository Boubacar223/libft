/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:10:23 by bouattar          #+#    #+#             */
/*   Updated: 2021/04/07 17:52:11 by bouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{	
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}