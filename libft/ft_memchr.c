/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:07:40 by gisasa-s          #+#    #+#             */
/*   Updated: 2019/12/04 19:27:05 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str2;

	str2 = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (str2[i] == (unsigned char)c)
			return (&str2[i]);
		i++;
	}
	return (NULL);
}
