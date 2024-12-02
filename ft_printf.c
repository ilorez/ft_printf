/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:24:13 by znajdaou          #+#    #+#             */
/*   Updated: 2024/12/02 16:23:26 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_type(char type, va_list va)
{
	if (type == 'c')
		return (ft_print_char(va_arg(va, int)));
	else if (type == 's')
		return (ft_print_str(va_arg(va, char *)));
	else if (type == 'd' || type == 'i')
		return (ft_print_nbr(va_arg(va, int)));
	else if (type == 'u')
		return (ft_print_unsigned_nbr(va_arg(va, unsigned int)));
	else if (type == 'x')
		return (ft_print_hexa(va_arg(va, unsigned int), "0123456789abcdef"));
	else if (type == 'X')
		return (ft_print_hexa(va_arg(va, unsigned int), "0123456789ABCDEF"));
	else if (type == 'p')
	  return (ft_print_ptr(va_arg(va, unsigned long)));
  return (ft_print_char(type));
}

int	ft_printf(const char *format, ...)
{
	va_list	va;
	int		out_len;

	if (!format || write(1, "", 0) == -1)
		return (-1);
	va_start(va, format);
	out_len = 0;
	while (*format)
	{
		if (*format == '%')
			out_len += ft_print_type(*(++format), va);
		else
			out_len += ft_print_char(*format);
		format++;
	}
	va_end(va);
	return (out_len);
}
