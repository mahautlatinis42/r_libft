/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 22:53:39 by mahautlatin       #+#    #+#             */
/*   Updated: 2021/02/21 15:54:20 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a new string.
** Which is the result of the concatenation of ’s1’ and ’s2’.
** NON STANDARD FUNCTION.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*single;
	int		i;
	int		j;
	int		total_length;

	if (!s1 || !s2)
		return (NULL);
	total_length = ft_strlen(s1) + ft_strlen(s2);
	if (!(single = (char *)malloc(sizeof(char) * (total_length + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		single[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		single[i + j] = s2[j];
		j++;
	}
	single[i + j] = '\0';
	return (single);
}
