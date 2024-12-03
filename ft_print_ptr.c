/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:35:18 by znajdaou          #+#    #+#             */
/*   Updated: 2024/12/03 09:36:05 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long ptr)
{
	int	out_len;

	if ((void *)ptr == NULL)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	out_len = 2;
	out_len += ft_print_hexa(ptr, "0123456789abcdef");
	return (out_len);
}
