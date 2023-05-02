/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:20:16 by eguler            #+#    #+#             */
/*   Updated: 2022/05/10 13:01:09 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int *len)
{
	if (n == -2147483648)
	{
		*len += ft_putchar_fd('-');
		*len += ft_putchar_fd('2');
		n = 147483648;
	}
	if (n < 0)
	{
		*len += ft_putchar_fd('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		*len += ft_putchar_fd(n + 48);
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, len);
		ft_putnbr_fd(n % 10, len);
	}
	return (*len);
}
