/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:50:56 by mmohamme          #+#    #+#             */
/*   Updated: 2021/12/20 19:41:53 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	*nb;
	int		len;

	nb = ft_itoa(n);
	ft_putstr_fd(nb, 1);
	len = ft_strlen(nb);
	free(nb);
	return (len);
}

int	ft_putlnbr(void	*p)
{
	unsigned long	n;
	int				len;

	n = (unsigned long) p;
	len = 2;
	ft_putstr_fd("0x", 1);
	ft_puthex(n, "0123456789abcdef", &len);
	return (len);
}

void	ft_puthex(unsigned long n, char *base, int *len)
{
	if (n < 16 && n >= 0)
	{
		(*len) += ft_putchar_fd(base[n], 1);
		return ;
	}
	ft_puthex(n / 16, base, len);
	ft_puthex(n % 16, base, len);
}

void	ft_putu(unsigned int n, int *len)
{
	if (n < 10)
	{
		(*len) += ft_putchar_fd(n + '0', 1);
		return ;
	}
	ft_putu(n / 10, len);
	ft_putu(n % 10, len);
}
