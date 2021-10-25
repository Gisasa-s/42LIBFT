/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <gisasa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 17:29:33 by gisasa-s          #+#    #+#             */
/*   Updated: 2021/10/09 16:26:39 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numbers(unsigned int numbers)
{
	unsigned int	size;

	size = 0;
	while (numbers >= 10)
	{
		numbers /= 10;
		size++;
	}
	return (size + 1);
}

char		*ft_itoa(int n)
{
	char			*str;
	unsigned int	size;
	unsigned int	cont;
	unsigned int	num;

	if (n < 0)
		num = (unsigned int)(n * -1);
	else
		num = (unsigned int)n;
	size = (unsigned int)ft_numbers(num);
	if (!(str = (char*)malloc(sizeof(char) * (size + 1 + (n < 0 ? 1 : 0)))))
		return (NULL);
	if (n < 0 && (str[0] = '-'))
		size++;
	cont = size - 1;
	while (num >= 10)
	{
		str[cont--] = (char)(num % 10 + '0');
		num /= 10;
	}
	str[cont] = (char)(num % 10 + '0');
	str[size] = '\0';
	
	free(str);
	return (str);
}

//modidfica el itoaa para que devuelva un entero , llaamr al putstr free(str) dentro del itoa ydevuelva el valor de putstr
// Para asi quitar ls licks