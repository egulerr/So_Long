/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:20:31 by eguler            #+#    #+#             */
/*   Updated: 2022/05/10 12:20:35 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n, int *len)
{
	if (n >= 0 && n <= 9)
		*len += ft_putchar_fd(n + 48);
	if (n > 9)
	{
		ft_unsigned(n / 10, len);
		ft_unsigned(n % 10, len);
	}
	return (*len);
}
