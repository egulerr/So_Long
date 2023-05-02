/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:19:36 by eguler            #+#    #+#             */
/*   Updated: 2022/05/10 13:00:52 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long long a, int *len)
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
		ft_pointer(a / 16, len);
		ft_pointer(a % 16, len);
	}
	return (*len);
}
