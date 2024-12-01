/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:24:13 by znajdaou          #+#    #+#             */
/*   Updated: 2024/12/01 20:40:23 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printf(char *format, ...)
{
  va_list va;
  va_start(va, format);
  size_t i;

  i = -1;
  while (format[++i])
  {
    if (format[i] == '%') 
    {
      i++;
      if (format[i] == '%')
        ft_putchar_fd('%',1);
      else if (format[i] == 'd')
        ft_putnbr_fd(va_arg( va,int),1);
      else if (format[i] == 's')
        ft_putstr_fd(va_arg(va, char *), 1);
      else if (format[i] == 'c')
        ft_putchar_fd(va_arg(va, int), 1);
      else if (format[i] == 'x')
        ft_putnbr_base(va_arg(va, int), "0123456789abcdef");
      else if (format[i] == 'X')
        ft_putnbr_base(va_arg(va, int), "0123456789ABCDEF");
      else if (format[i] == 'p')
        ft_putnbr_base(va_arg(va, int), "0123456789abcdef");
      else if (format[i] == 'u')
        ft_putnbr_fd(va_arg(va, unsigned int), 1);
      else if (format[i] == 'i')
        ft_putnbr_fd(va_arg(va, int), 1);
    }
    else 
      ft_putchar_fd(format[i], 1);
  }
  va_end(va);
}
