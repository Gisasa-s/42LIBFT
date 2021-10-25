/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <gisasa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 12:45:27 by gisasa-s          #+#    #+#             */
/*   Updated: 2021/10/22 11:15:09 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(long n, int fd) // imprime los numeros sin reservar memoria  
//ultilizo putnbr en  u por que culaquier unsgend cab en un long y puede imprimir 
//cualqiera de los negatvos a positivos 
{
	int bytes;
	char c;
	bytes = 0;
	if (n == -2147483648)
	{
		bytes+= write(fd, "-2147483648", 11);
	}
	if (n < 0 && n != -2147483648)
	{
		bytes+= ft_putchar_fd('-', fd);
		n = n * (-1);
	}
	if (n > 9)
	{
		c = (n % 10) + 48;
		bytes+= ft_putnbr_fd((n / 10), fd);
		bytes+= ft_putchar_fd(c, fd);
	}
	if (n >= 0 && n < 10)
	{
		c = n + 48;
		bytes+= ft_putchar_fd(c, fd);
	}
	return (bytes);
}
