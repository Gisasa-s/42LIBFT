/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 11:34:28 by gisasa-s          #+#    #+#             */
/*   Updated: 2019/12/13 16:47:38 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*cadena;
	size_t		tamaño;

	if (!s1 || !s2)
		return (NULL);
	tamaño = ft_strlen(s1) + ft_strlen(s2) + 1;
	cadena = (char*)malloc(tamaño + 1);
	if (cadena == NULL)
		return (NULL);
	ft_strlcpy(cadena, s1, tamaño + 1);
	ft_strlcat(cadena, s2, tamaño + 1);
	return (cadena);
}
