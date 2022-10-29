/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_resolver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciriso-e <ciriso-e@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:06:52 by ciriso-e          #+#    #+#             */
/*   Updated: 2022/10/29 15:37:30 by ciriso-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int	**ft_init_tablero(int size)
{
	int contador;
	int *grid_y[size];
	int **grid_yp;
	int *mallocp;

	contador = 0;
	grid_yp = &grid_y[0];
	while (contador < size)
	{
		mallocp = (int * ) malloc(size * sizeof(int));
		grid_yp[contador] = mallocp;
		contador++;
	}

	return (grid_yp);
}

/* void	ft_fill_with_1_to_n(int *tablero[], int pos, int axis, int size)
{
	int contador;

	if (axis == 0 || axis == 2)
	{
		contador = 1;
	}
	else
	{
		contador = size;
	}
	while (**tablero)
	{
		if(axis == 1 || axis == 3)
		{
			tablero[axis][pos] = contador;
		}
		else
		{
			tablero[pos][axis] = contador;
		}
		if (axis == 1 || axis == 3)
		{
			contador--;
		}
		else
		{
			contador++;
		}
	}
} */

/* void	ft_fill_with_n(int *tablero, int pos, int axis)
{
	int contador;

	contador = 1;
} */

void	ft_clues_on_one_axis(int *tablero[], int **clues, int size, int axis)
{
	int pos;
	//int axis_check;
	pos = 0;
	while (pos < size)
	{
		//printf("pos: %i, size: %i", pos, size);
		printf("clue %d\n", clues[1][3]);
	/* 	if (*clues[axis][pos] == size && *clues[axis + 1][pos] == 1)
		{
			//llenamos la fila con 1 to size
			//ft_fill_with_1_to_n(tablero, pos, axis, size);
		}
		else if (*clues[axis][pos] == 1 && *clues[axis + 1][pos] == size)
		{
			// llenamos con size to 1
			//ft_fill_with_1_to_n(tablero, pos, axis + 1, size);
		}
		else if(*clues[axis][pos] == 1 && *clues[axis + 1][pos] != size)
		{
			// colocamos el 4 solamente en ROW LEFT
			//ft_fill_with_n(tablero, pos, axis);
		}
		else if(*clues[axis + 1][pos] == 1 && *clues[axis][pos] != size)
		{
			// colocamos el 4 solamente en ROW RIGHT
			//ft_fill_with_n(tablero, pos, axis + 1);
		} */
		pos++;
	}
}


void	ft_init(int size, int **clues)
{
	int **tablero;
	tablero = ft_init_tablero(size);

	ft_clues_on_one_axis(tablero, clues, size, 0);
	ft_clues_on_one_axis(tablero, clues, size, 2);

	int contador;
	contador = 0;
}
