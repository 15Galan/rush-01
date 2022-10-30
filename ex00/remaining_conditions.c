/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruteforce.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciriso-e <ciriso-e@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:19:10 by ciriso-e          #+#    #+#             */
/*   Updated: 2022/10/30 19:19:24 by ciriso-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_remaining_conditions(int **grid, int *arr, int pos_x, int pos_y)
{
	if(grid[pos_y][pos_x] == 1)
	{
		arr[0] +=  1;
	}
	else if(grid[pos_y][pos_x] == 2)
	{
		arr[1] +=  1;
	}
	else if(grid[pos_y][pos_x] == 3)
	{
		arr[2] +=  1;
	}
	else if(grid[pos_y][pos_x] == 4)
	{
		arr[3] +=  1;
	}
}

int		*ft_check_inserted(int **grid, int size)
{
	int	pos_x;
	int	pos_y;
	int *array;

	array = (int *) malloc(4 * sizeof(int));
	pos_x = 0;
	pos_y = 0;
	while (pos_y < size)
	{
		pos_x = 0;
		while(pos_x < size)
		{
			ft_remaining_conditions(grid, array, pos_x, pos_y);
			pos_x++;
		}
		pos_y++;
	}
	return (array);
}

void	ft_check_remaining(int *array, int size)
{
	int ones;
	int twos;
	int threes;
	int fours;

	ones = size - array[0];
	twos = size - array[1];
	threes = size - array[2];
	fours = size - array[3];

	
}