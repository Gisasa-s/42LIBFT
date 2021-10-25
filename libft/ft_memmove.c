/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:34:25 by gisasa-s          #+#    #+#             */
/*   Updated: 2019/12/08 13:25:52 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*src2;
	char			*dst2;
	unsigned int	i;

	dst2 = (char*)dst;
	src2 = (char*)src;
	if (!dst && !src)
		return (0);
	if (len == 0)
		return (dst);
	i = 0;
	if (dst2 > src2)
	{
		while (len--)
			dst2[len] = src2[len];
	}
	else
	{
		while (i < len)
		{
			dst2[i] = src2[i];
			i++;
		}
	}
	return (dst);
}
