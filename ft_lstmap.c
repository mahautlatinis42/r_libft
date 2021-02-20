/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 23:15:15 by malatini          #+#    #+#             */
/*   Updated: 2021/02/20 20:02:49 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates in ’lst’ and applies the ’f’ to the content of each element.
** Creates a new list resulting of the successive applications of ’f’.
** The ’del’ function is used to delete the content of an element if needed.
** NON STANDARD FUNCTION.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *temp;

	new = NULL;
	while (lst)
	{
		if (!(temp = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new, del);
			new = NULL;
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&new, temp);
	}
	return (new);
}