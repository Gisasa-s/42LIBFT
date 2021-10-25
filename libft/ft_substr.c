/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 11:07:25 by gisasa-s          #+#    #+#             */
/*   Updated: 2019/12/12 18:07:57 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str2;
	size_t		j;

	if (!(str2 = (char*)malloc(sizeof(char) * (len + 1))) || !s)
		return (NULL);
	j = 0;
	if (start < ft_strlen(s))
	{
		while (j < len && s[start])
		{
			str2[j] = s[start];
			start++;
			j++;
		}
	}
	str2[j] = '\0';
	return (str2);
}
