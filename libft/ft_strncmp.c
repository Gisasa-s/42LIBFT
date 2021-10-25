/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 14:51:49 by gisasa-s          #+#    #+#             */
/*   Updated: 2019/12/08 15:10:29 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int a;

	i = 0;
	a = 0;
	while ((unsigned char)s1[i] != '\0' && (unsigned char)s2[i] != '\0'
			&& i < n && a == 0)
	{
		a += (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (a == 0 && i < n)
		a = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (a);
}
