/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singleton_dir.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaint-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 18:19:57 by psaint-j          #+#    #+#             */
/*   Updated: 2015/06/11 14:36:41 by psaint-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wolf3d.h"

t_pos	*dir(void)
{
	static	t_pos dir = {-1, 0};

	return (&dir);
}

void	set_dir_x(double x)
{
	dir()->x = x;
}

void	set_dir_y(double y)
{
	dir()->y = y;
}

double	get_dir_x(void)
{
	return (dir()->x);
}

double	get_dir_y(void)
{
	return (dir()->y);
}
