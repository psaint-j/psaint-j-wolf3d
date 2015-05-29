/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaint-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 11:25:54 by psaint-j          #+#    #+#             */
/*   Updated: 2015/05/29 16:56:03 by psaint-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H

# define WOLF3D_H
# define W 13
# define A 0
# define S 1
# define D 2
# define LEFT 123
# define RIGHT 124
# define EXIT 53

# include <stdlib.h>

typedef struct		s_pos
{
	double			x;
	double			y;
}					t_pos;

typedef struct		s_var
{
	t_pos	pos;
	t_pos	dir;
	t_pos	plane;
}					t_var;

typedef struct		s_move
{
	int		forward;
	int		backward;
	int		left;
	int		rigth;
	float	walkspeed;
	float	rotatespeed;
	float	turn;
}					t_move;

typedef struct		s_env
{
	void	*mlx;
	void	*win;
	t_move	*m;
}					t_env;
#endif
