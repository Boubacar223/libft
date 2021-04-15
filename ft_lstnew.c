/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:16:52 by bouattar          #+#    #+#             */
/*   Updated: 2021/04/10 19:52:54 by bouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*pt;

	pt = (t_list *)malloc(sizeof(*pt));
	if (!pt)
		return (NULL);
	pt -> content = content;
	pt -> next = NULL;
	return (pt);
}
