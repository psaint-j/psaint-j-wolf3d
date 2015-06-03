/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   var_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaint-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 16:53:34 by psaint-j          #+#    #+#             */
/*   Updated: 2015/06/02 20:53:08 by psaint-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wolf3d.h"

t_move		*init(void)
{
	t_move	*m;
	if (!(m = (t_move *)malloc(sizeof(t_move))))
		return (0);
	m->forward = 0;
	m->backward = 0;
	m->left = 0;
	m->right = 0;
	m->walkspeed = 0;
	m->rotatespeed = 0;
	m->turn = 0;
	m->firt = 1;
	return (m);
}

void	init_t_var(t_var *v)
{
	v->y = 0;
	v->hit = 0;
	v->camera.x = (2 * v->x / LONG) - 1;
	v->pos.x = get_pos_x();
	v->pos.y = get_pos_y();
	v->dir.x = get_dir_x() + get_plan_x() * v->camera.x;
	v->dir.y = get_dir_y() + get_plan_y() * v->camera.x;
	v->map.x = (int)v->pos.x;
	v->map.y = (int)v->pos.y;
	v->delta.x = sqrt(1 + (v->dir.y * v->dir.y) / (v->dir.x * v->dir.x));
	v->delta.y = sqrt(1 + (v->dir.x * v->dir.x) / (v->dir.y * v->dir.y));
}
