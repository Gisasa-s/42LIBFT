/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:08:27 by gisasa-s          #+#    #+#             */
/*   Updated: 2019/12/10 13:32:08 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*s1;
	char			*s2;

	s1 = (char*)src;
	s2 = (char*)dst;
	i = 0;
	if (s1 == '\0' && s2 == '\0')
		return (NULL);
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (dst);
}
