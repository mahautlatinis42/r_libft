/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <mahaut.latinis@essca.eu>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 22:36:58 by malatini          #+#    #+#             */
/*   Updated: 2020/09/10 20:46:56 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "bonus.h"
/*
** Iterates the list ’lst’ and applies ’f’ to the content of each element.
** NON STANDARD FUNCTION.
*/

//cette fonction ne marche pas
void    fonction(void *lst)
{
    lst = strdup("lala");
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

int    main(void)
{
    t_list *ptr = NULL;
    t_list *first = NULL;
    if (!(first = (t_list *)malloc(sizeof(t_list))))
        return (0);
    first->content = (char *)strdup("coucou");
    ft_lstadd_front(&ptr, first);
    ft_lstiter(ptr, &fonction);
	while (ptr)
	{
		puts((char*)ptr->content);
		ptr = ptr->next;
	}
    return (0);
}
