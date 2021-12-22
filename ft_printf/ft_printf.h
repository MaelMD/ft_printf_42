/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:52:08 by mmohamme          #+#    #+#             */
/*   Updated: 2021/12/20 19:41:37 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_print(char c, va_list ptr, int *n);
int		ft_putnbr(int n);
void	ft_puthex(unsigned long n, char *base, int *len);
void	ft_putu(unsigned int n, int *len);
int		ft_putlnbr(void	*p);
int		ft_len(int nb);
int		ft_strlen(char *s);
int		ft_putstr_fd(char *s, int fd);
int		ft_putchar_fd(char c, int fd);
char	*ft_itoa(int n);

#endif
