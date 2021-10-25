/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:47:06 by gisasa-s          #+#    #+#             */
/*   Updated: 2019/12/09 16:16:45 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen((char*)s);
	if (s[len] == '\0' && s[len] == (char)c)
		return ((char*)s + len);
	while (len--)
	{
		if (s[len] == (char)c)
			return ((char*)s + len);
	}
	return (0);
}
