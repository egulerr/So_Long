/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upperx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:20:41 by eguler            #+#    #+#             */
/*   Updated: 2022/05/10 12:20:45 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_upperx(unsigned int a, int *len)
{
	if (a < 16)
	{
		if (a < 10)
		{
			*len += ft_putchar_fd(a + 48);
		}
		else
			*len += ft_putchar_fd(a + 55);
	}
	else
	{
		ft_upperx(a / 16, len);
		ft_upperx(a % 16, len);
	}
	return (*len);
}
