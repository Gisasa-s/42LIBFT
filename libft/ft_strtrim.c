/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 19:42:22 by gisasa-s          #+#    #+#             */
/*   Updated: 2019/12/17 22:17:17 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_crossini(char const *s1, int pos, char const *set)
{
	int c;

	c = 0;
	while (set[c] != '\0')
	{
		if (s1[pos] == set[c])
		{
			pos++;
			c = 0;
		}
		else
			c++;
	}
	return (pos);
}

static int	ft_crossend(char const *s1, int pos, char const *set)
{
	int c;

	c = 0;
	while (pos > 0 && set[c] != '\0')
	{
		if (s1[pos] == set[c])
		{
			pos--;
			c = 0;
		}
		else
			c++;
	}
	return (pos);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		ini;
	int		end;
	char	*s2;

	ini = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	ini = ft_crossini(s1, ini, set);
	end = ft_crossend(s1, end - 1, set);
	if (ini >= end)
	{
		s2 = ft_calloc(1, 1);
		return (s2);
	}
	s2 = malloc((((end + 2) - ini) * sizeof(char)));
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1 + ini, (end + 2) - ini);
	return (s2);
	ft_strlcpy(s2, s1 + ini, (end + 2) - ini);
	return (s2);
}
