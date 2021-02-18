/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 23:09:44 by malatini          #+#    #+#             */
/*   Updated: 2021/01/09 16:10:08 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies len bytes from string src to string dst.
** The two strings may overlap, the copy is done in a non-destructive manner.
** LIBC FUNCTION.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*buffer;
	size_t	i;

	i = -1;
	if (!(buffer = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (++i < len)
		((unsigned char *)buffer)[i] = ((unsigned char *)src)[i];
	i = -1;
	while (++i < len)
		((unsigned char *)dst)[i] = ((unsigned char *)buffer)[i];
	free(buffer);
	return ((void *)dst);
}
