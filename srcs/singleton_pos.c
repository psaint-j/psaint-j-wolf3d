/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singleton_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaint-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 18:19:57 by psaint-j          #+#    #+#             */
/*   Updated: 2015/06/11 14:36:37 by psaint-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wolf3d.h"

t_pos	*pos(void)
{
	static	t_pos pos = {11, 19};

	return (&pos);
}

void	set_pos_x(double x)
{
	pos()->x = x;
}

void	set_pos_y(double y)
{
	pos()->y = y;
}

double	get_pos_x(void)
{
	return (pos()->x);
}

double	get_pos_y(void)
{
	return (pos()->y);
}
