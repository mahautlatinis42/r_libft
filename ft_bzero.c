/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <mahaut.latinis@essca.eu>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 22:00:23 by malatini          #+#    #+#             */
/*   Updated: 2020/09/07 12:45:40 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes n zeroed bytes to the string s.
** If n is zero, bzero() does nothing.
** LIBC function.
*/

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return ;
	while (i < n)
		((char *)s)[i++] = '\0';
}
