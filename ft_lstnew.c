/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <mahaut.latinis@essca.eu>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 22:20:56 by malatini          #+#    #+#             */
/*   Updated: 2020/09/07 12:52:43 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and return a new element
** The variable 'content' is initialized with the value of the parameter 'content'.
** The variable 'next' is initialized to NULL.
** NON STANDARD FUNCTION.
 */

t_list	*ft_lstnew(void const *content)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->content = (void *)content;
	new->next = NULL;
	return (new);
}
