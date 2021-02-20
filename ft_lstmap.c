/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 23:15:15 by malatini          #+#    #+#             */
/*   Updated: 2021/02/20 16:52:10 by malatini         ###   ########.fr       */
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
	//t_list	*tmp;
	//t_list	*new;
	//t_list 	*begin;
	
	if (!f || !del || !lst)
		return (NULL);
	//Itère sur la liste lst et applique la fonction f au contenu de chaque élément.
	while (lst)
	{
		lst = f(lst);
		lst = lst->next;
	}
	return (NULL);
}
