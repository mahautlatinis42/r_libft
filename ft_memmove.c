/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 23:09:44 by malatini          #+#    #+#             */
/*   Updated: 2021/02/21 15:41:42 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies len bytes from string src to string dst.
** The two strings may overlap, the copy is done in a non-destructive manner.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*buffer;
	size_t	i;

	i = -1;
	buffer = NULL;
	if (!dst && !src)
		return (dst);
	while (++i < len)
		((unsigned char *)buffer)[i] = ((unsigned char *)src)[i];
	i = -1;
	while (++i < len)
		((unsigned char *)dst)[i] = ((unsigned char *)buffer)[i];
	return ((void *)dst);
}
