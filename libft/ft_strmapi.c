/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 14:17:32 by gisasa-s          #+#    #+#             */
/*   Updated: 2019/12/17 16:57:28 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*cadena2;
	unsigned int	i;

	if (!s)
		return (NULL);
	cadena2 = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (cadena2 == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		cadena2[i] = f(i, s[i]);
		i++;
	}
	cadena2[i] = '\0';
	return (cadena2);
}
