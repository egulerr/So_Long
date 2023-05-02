/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:59:55 by eguler            #+#    #+#             */
/*   Updated: 2022/05/10 11:59:58 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	p;

	i = 0;
	p = (char) c;
	if (p == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == p)
			return (0);
		i++;
	}
	return (1);
}
