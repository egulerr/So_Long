/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:00:28 by eguler            #+#    #+#             */
/*   Updated: 2022/05/10 12:59:43 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	moveup(t_list *main)
{
	checkarray(main);
	if (main->map[main->pindex - main->slen - 1] != '1' \
		&& main->map[main->pindex - main->slen - 1] == '0')
	{
		main->map[main->pindex - main->slen - 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
	}
	if (main->map[main->pindex - main->slen - 1] == 'C')
	{
		main->map[main->pindex - main->slen - 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
	}
	if (main->map[main->pindex - main->slen - 1] == 'E' && main->cc == 0)
	{
		ft_printf("%sCongrats you finished the games %d steps.", "\x1B[32m", \
		main->movecount + 1);
		ft_exit(main);
	}
}

void	movedown(t_list *main)
{
	checkarray(main);
	if (main->map[main->pindex + main->slen + 1] != '1' \
		&& main->map[main->pindex + main->slen + 1] == '0')
	{
		main->map[main->pindex + main->slen + 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
	}
	if (main->map[main->pindex + main->slen + 1] == 'C')
	{
		main->map[main->pindex + main->slen + 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
	}
	if (main->map[main->pindex + main->slen + 1] == 'E' && main->cc == 0)
	{
		ft_printf("%s%sCongrats you finished the games %d steps.", "\x1B[32m", \
		main->movecount + 1);
		ft_exit(main);
	}
}

void	moveright(t_list *main)
{
	checkarray(main);
	if (main->map[main->pindex + 1] != '1' \
		&& main->map[main->pindex + 1] == '0')
	{
		main->map[main->pindex + 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
	}
	if (main->map[main->pindex + 1] == 'C')
	{
		main->map[main->pindex + 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
	}
	if (main->map[main->pindex + 1] == 'E' && main->cc == 0)
	{
		ft_printf("%sCongrats you finished the games %d steps.", "\x1B[32m", \
		main->movecount + 1);
		ft_exit(main);
	}
}

void	moveleft(t_list *main)
{
	checkarray(main);
	if (main->map[main->pindex - 1] != '1' \
		&& main->map[main->pindex - 1] == '0')
	{
		main->map[main->pindex - 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
	}
	if (main->map[main->pindex - 1] == 'C')
	{
		main->map[main->pindex - 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
	}
	if (main->map[main->pindex - 1] == 'E' && main->cc == 0)
	{
		ft_printf("%sCongrats you finished the games %d steps.", "\x1B[32m", \
		main->movecount + 1);
		ft_exit(main);
	}
}
