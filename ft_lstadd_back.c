/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 22:18:07 by malatini          #+#    #+#             */
/*   Updated: 2021/02/20 10:57:22 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds the element ’new’ at the end of the list.
** NON STANDARD FUNCTION.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new = (*lst);
	while (new->next)
		new = new->next;
	new->next = NULL;
}

int main(void)
{
	//Je declare et initialise le premier element de la liste
	void const *content = "test";
	void const *content1 = "c'est";
	void const *content2 = "Mahaut";
	t_list *first = ft_lstnew(content);
	t_list *second = ft_lstnew(content1);
	t_list *third = ft_lstnew(content2);
	//Je note l'adresse du premier element (pointeur sur pointeur)
	t_list **list = &first;
	//J'ajoute dest element
	ft_lstadd_back(list, second);
	ft_lstadd_back(list, third);
	return (0);
}