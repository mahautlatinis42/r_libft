/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <mahaut.latinis@essca.eu>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 22:01:22 by malatini          #+#    #+#             */
/*   Updated: 2020/09/10 22:37:38 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates enough space for count objects that are size bytes of memory each.
** Returns a pointed to the allocated memory.
** The allocated memory is filled with bytes of value zero.
** LIBC function.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	size_t	i;

	i = 0;
	if (!(memory = malloc(sizeof(size) * count)))
		return (NULL);
	ft_bzero(memory, count);
	return (memory);
}
