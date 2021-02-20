/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 23:15:15 by malatini          #+#    #+#             */
/*   Updated: 2021/01/10 23:27:24 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates in ’lst’ and applies the ’f’ to the content of each element.
** Creates a new list resulting of the successive applications of ’f’.
** The ’del’ function is used to delete the content of an element if needed.
** NON STANDARD FUNCTION.
*/

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *new_elem;

	if (!f || !del)
		return (NULL);
	while (lst)
	{
		if (!(new_elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_lst, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}

//a tester
int		main(void)
{
	return (0);
}
