/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 17:36:31 by mahautlatin       #+#    #+#             */
/*   Updated: 2021/01/09 15:53:36 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocated and returns a substring from the string 's'.
**	The substring begins at the index start and is of maximum size 'len'.
** NON STANDARD FUNCTION.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	if (!(sub = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
