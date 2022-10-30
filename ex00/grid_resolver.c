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

#define SIZE = 4

int	**ft_init_grid(int size)
{
	int counter; 

	counter = 0; 
	int** arr = (int**)malloc(4 * sizeof(int*));
	while(counter < size)
	{
		arr[counter] = (int*)malloc(4 * sizeof(int));
		counter++;
	} 
	return (arr);
}

void	ft_fill_with_1_to_n(int **grid, int pos, int axis, int size)
{
	int count;
	int while_counter;

	while_counter = 0;
	//POS 0  AXIS 3
	if(axis == 1 || axis == 3)
	{
		count = 1;
	}
	else
	{
		count = size;
	}
	while (while_counter < size)
	{
		if(axis == 0 || axis == 1)
		{
			grid[while_counter][pos] = count;
		}
		else
		{
			grid[pos][while_counter] = count;
		}
		if(axis == 1 || axis == 3)
		{
			count++;
		}
		else
		{
			count--;
		}
		while_counter++;
	}
} 

void	ft_fill_with_n(int **grid, int pos, int axis)
{
	if (axis == 0)
	{
		grid[0][pos] = 4;
	}
	else if(axis == 1)
	{
		grid[4][pos] = 4;
	}
	else if(axis == 2)
	{
		grid[pos][0] = 4;
	}
	else
	{
		grid[pos][3] = 4;
	}
} 

void	ft_clues_on_one_axis(int **grid, int **clues, int size, int axis)
{
	int pos;
	//int axis_check;
	pos = 0;
	while (pos < size)
	{
	 	if (clues[axis][pos] == size && clues[axis + 1][pos] == 1)
		{
			//llenamos la fila con 1 to size
			ft_fill_with_1_to_n(grid, pos, axis + 1, size);
		}
		else if (clues[axis][pos] == 1 && clues[axis + 1][pos] == size)
		{
			// llenamos con size to 1
			ft_fill_with_1_to_n(grid, pos, axis, size);
		}
		
		if(clues[axis][pos] == 1 && clues[axis + 1][pos] != size)
		{
			// colocamos el 4 solamente
			ft_fill_with_n(grid, pos, axis);
		}
		else if(clues[axis + 1][pos] == 1 && clues[axis][pos] != size)
		{
			// colocamos el 4 solamente
			ft_fill_with_n(grid, pos, axis + 1);
		}
		pos++;
	}
}

//DEBUG
void	ft_show_grid(int **grid, int size){
	int pos_x;
	int pos_y;
	
	pos_x = 0;
	pos_y = 0;
	
	while(pos_y < size)
	{
		while(pos_x < size)
		{
			printf("%d ", grid[pos_y][pos_x]);
			pos_x++;
		}
		printf("\n");
		pos_x = 0;
		pos_y++;
	}
}


void	ft_init(int size, int **clues)
{
	int **grid;
	grid = ft_init_grid(size);

	ft_clues_on_one_axis(grid, clues, size, 0);
	ft_clues_on_one_axis(grid, clues, size, 2);
	
	ft_show_grid(grid, size);
	printf("\n");
	ft_show_grid(clues, size);
}