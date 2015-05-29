/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaint-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 12:20:19 by psaint-j          #+#    #+#             */
/*   Updated: 2015/05/29 18:18:19 by psaint-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wolf3d.h"

int		key_down(int keycode, t_env *a)
{
	if (keycode == W)
		a->m->forward = 1;
	if (keycode == A )
		a->m->left = 1;
	if (keycode == S)
		a->m->backward = 1;
	if (keycode == D)
		a->m->rigth = 1;
	if (keycode == LEFT)
	{
		a->m->turn = 1;
		a->m->rotatespeed = -0.1;
	}
	if (keycode == RIGHT)
	{
		a->m->turn = 1;
		a->m->rotatespeed = 0.1;
	}
	if (keycode == EXIT)
		exit(0);
	return (1);
}

int		key_up(int keycode, t_env *a)
{
	if (keycode == W)
		a->m->forward = 0;
	if (keycode == A )
		a->m->left = 0;
	if (keycode == S)
		a->m->backward = 0;
	if (keycode == D)
		a->m->rigth = 0;
	if (keycode == LEFT)
		a->m->turn = 0;
	if (keycode == RIGHT)
		a->m->turn = 0;
	return (0);
}
