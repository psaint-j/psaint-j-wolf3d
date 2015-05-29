/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   var_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaint-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 16:53:34 by psaint-j          #+#    #+#             */
/*   Updated: 2015/05/29 18:18:09 by psaint-j         ###   ########.fr       */
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
	
}
