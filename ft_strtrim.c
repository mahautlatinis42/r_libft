/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 22:33:36 by malatini          #+#    #+#             */
/*   Updated: 2021/02/20 14:56:33 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			is_part_of_set(char const c, char const *set)
{
	size_t i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*beginning(char const *s1, char const *set)
{
	char	*str;
	size_t	i;

	i = 0;
	while (is_part_of_set(s1[i], set))
		i++;
	str = ft_strdup(s1 + i);
	return (str);
}

char		*end(char const *s1, char const *set)
{
	int		j;
	char	*cpy;

	j = 0;
	while (s1[j])
		j++;
	j--;
	while (is_part_of_set(s1[j], set))
		j--;
	j++;
	if (!(cpy = (char *)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	cpy[j] = '\0';
	while (j-- > 0)
		cpy[j] = s1[j];
	return (cpy);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*first;
	char	*second;

	first = beginning(s1, set);
	second = end(first, set);
	free(first);
	return (second);
}
