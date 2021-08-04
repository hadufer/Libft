/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <hadufer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 20:58:36 by hadufer           #+#    #+#             */
/*   Updated: 2021/08/04 21:20:36 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **last, t_list *new)
{
	if (!*last)
	{
		*last = new;
		return ;
	}
	if (!new)
		return ;
	while (!*last && (*last)->next)
		*last = (*last)->next;
	(*last)->next = new;
}
