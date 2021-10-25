/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:25:19 by gisasa-s          #+#    #+#             */
/*   Updated: 2019/12/02 17:24:00 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <memory.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int			cont;
	unsigned char			*src2;
	unsigned char			*dest2;

	cont = 0;
	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dst;
	while (n > 0)
	{
		dest2[cont] = src2[cont];
		if (src2[cont] == (unsigned char)c)
		{
			cont++;
			return (dest2 + cont);
		}
		cont++;
		n--;
	}
	return (NULL);
}
