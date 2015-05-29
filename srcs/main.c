/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaint-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 11:24:31 by psaint-j          #+#    #+#             */
/*   Updated: 2015/05/29 18:18:15 by psaint-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wolf3d.h"

#define F forward
#define B backward
#define R right
#define L left

int		render(t_env *e)
{
	if (e->m->F || e->m->B || e->m->R || e->m->L)
	{
		e->v->sreen = 0;
	}
	return (1);
}
