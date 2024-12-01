/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:20:23 by znajdaou          #+#    #+#             */
/*   Updated: 2024/12/01 20:37:15 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	_ft_putnbr_base(int nbr, char *base, int len)
{
	int	mod;

	if (nbr > 0)
	{
		mod = nbr % len;
		nbr /= len;
		_ft_putnbr_base(nbr, base, len);
		ft_putchar_fd(base[mod], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (nbr == -2147483648)
	{
		ft_putchar_fd('-', 1);
		nbr = 2147483648 / 16;
		_ft_putnbr_base(nbr, base, 16);
		ft_putchar_fd(base[2147483648 % 16], 1);
		return ;
	}
	else if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar_fd('-', 1);
	}
	if (nbr == 0)
		ft_putchar_fd('0', 1);
	else
		_ft_putnbr_base(nbr, base, 16);
}
