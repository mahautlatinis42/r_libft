/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 22:33:36 by malatini          #+#    #+#             */
/*   Updated: 2021/01/10 23:07:54 by malatini         ###   ########.fr       */
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

size_t		place_fin_str(char const *s1, char const *set)
{
	size_t end;
	size_t i;

	i = 0;
	while (s1[i])
		i++;
	i--;
	while (is_part_of_set(s1[i], set) == 1 && s1[i] && i > 0)
		i--;
	end = i;
	return (end);
}

int			same(char const *s1, char const *set)
{
	size_t i;

	i = 0;
	while (s1[i] && is_part_of_set(s1[i], set))
		i++;
	if (i == ft_strlen(s1))
		return (1);
	return (0);
}

char		*cpy(char const *s1, char *str, size_t begin, size_t fin_str)
{
	int	i;

	i = 0;
	while (begin <= fin_str)
	{
		str[i] = s1[begin];
		i++;
		begin++;
	}
	return (str);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	length;
	size_t	fin_str;
	size_t	begin;
	char	*str;

	if (same(s1, set))
		return (ft_strdup(""));
	begin = 0;
	length = 0;
	i = 0;
	fin_str = place_fin_str(s1, set);
	str = NULL;
	while (s1[i] && i < fin_str)
	{
		while (is_part_of_set(s1[i++], set) == 1 && s1[i])
			begin++;
		i--;
		while (i++ < fin_str)
			length++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	return (str = cpy(s1, str, begin, fin_str));
}
