/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 22:18:07 by malatini          #+#    #+#             */
/*   Updated: 2021/01/10 23:18:41 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds the element ’new’ at the end of the list.
** NON STANDARD FUNCTION.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *begin;
	if (!lst || !new)
		return ;
	begin = (*lst);
	while (begin->next)
		begin = begin->next;
	begin->next = new;
}
