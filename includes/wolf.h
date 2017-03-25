/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 15:08:36 by jdesmare          #+#    #+#             */
/*   Updated: 2017/03/18 11:46:27 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF_H
# define WOLF_H

# include "../libft/libft.h"
# include "mlx.h"
# include "math.h"

# define WINDOW_X 700
# define WINDOW_Y 400
# define MAP_X 24
# define MAP_Y 24

typedef struct		s_env
{
	void		*mlx;
	void		*window;
	void		*image;
	char		*data;
	int			posX;
	int			posY;
	int			dirX;
	int			dirY;
	float		planeX;
	float		planeY;
	int			time;
	int			oldTime;
}					t_env;

void				init_image(t_env *env);
void				init_game(t_env *env);
void				draw(t_env *env);
void				init_vars(t_env *env);

#endif
