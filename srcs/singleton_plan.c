/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singleton_plan.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaint-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/11 14:37:22 by psaint-j          #+#    #+#             */
/*   Updated: 2015/06/11 14:37:39 by psaint-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wolf3d.h"

t_pos	*plan(void)
{
	static	t_pos plan = {0, 1};

	return (&plan);
}

void	set_plan_x(double x)
{
	plan()->x = x;
}

void	set_plan_y(double y)
{
	plan()->y = y;
}

double	get_plan_x(void)
{
	return (plan()->x);
}

double	get_plan_y(void)
{
	return (plan()->y);
}
