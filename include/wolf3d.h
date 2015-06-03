/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaint-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 11:25:54 by psaint-j          #+#    #+#             */
/*   Updated: 2015/06/02 20:51:57 by psaint-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H

# define WOLF3D_H
# define W 13
# define A 0
# define S 1
# define D 2
# define LARG 720
# define LONG 720
# define LEFT 123
# define RIGHT 124
# define EXIT 53

# include <stdlib.h>
# include <math.h>

typedef struct		s_pos
{
	double			x;
	double			y;
}					t_pos;

typedef struct		s_var
{
	float	x;
	float	y;
	int		hit;
	int		side;
	t_pos	pos;
	t_pos	dir;
	t_pos	plan;
	t_pos	camera;
	t_pos	step;
	t_pos	map;
	t_pos	sidedist;
	t_pos	delta;
	int		sreen;
}					t_var;

typedef struct		s_move
{
	int		forward;
	int		backward;
	int		left;
	int		right;
	int		firt;
	float	walkspeed;
	float	rotatespeed;
	float	turn;
}					t_move;

typedef struct		s_env
{
	void	*mlx;
	void	*win;
	t_move	*m;
	t_var	*v;
}					t_env;

t_pos				*dir(void);
void				set_dir_x(double x);
void				set_dir_y(double y);
double				get_dir_x(void);
double				get_dir_y(void);
t_pos				*plan(void);
void				set_plan_x(double x);
void				set_plan_y(double y);
double				get_plan_x(void);
double				get_plan_y(void);
t_pos				*pos(void);
void				set_pos_x(double x);
void				set_pos_y(double y);
double				get_pos_x(void);
double				get_pos_y(void);
#endif
