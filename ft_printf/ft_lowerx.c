/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowerx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:01:59 by eguler            #+#    #+#             */
/*   Updated: 2022/05/10 13:00:48 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lowerx(unsigned int a, int *len)
{
	if (a < 16)
	{
		if (a < 10)
		{
			*len += ft_putchar_fd(a + 48);
		}
		else
			*len += ft_putchar_fd(a + 87);
	}
	else
	{
		ft_lowerx(a / 16, len);
		ft_lowerx(a % 16, len);
	}
	return (*len);
}
