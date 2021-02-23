/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 22:01:22 by malatini          #+#    #+#             */
/*   Updated: 2021/02/23 08:39:57 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates enough space for count objects that are size bytes of memory each.
** Returns a pointed to the allocated memory.
** The allocated memory is filled with bytes of value zero.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

if (!(memory = (void *)malloc(sizeof(size) * count)))
		return (NULL);
	ft_bzero(memory, count * size);
	return (memory);
}
