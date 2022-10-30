/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remaining_conditions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:19:10 by ciriso-e          #+#    #+#             */
/*   Updated: 2022/10/30 23:32:46 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_remaining_conditions(int **grid, int *arr, int pos_x, int pos_y)
{
	if (grid[pos_y][pos_x] == 1)
	{
		arr[0] += 1;
	}
	else if (grid[pos_y][pos_x] == 2)
	{
		arr[1] += 1;
	}
	else if (grid[pos_y][pos_x] == 3)
	{
		arr[2] += 1;
	}
	else if (grid[pos_y][pos_x] == 4)
	{
		arr[3] += 1;
	}
}

int	*ft_check_inserted(int **grid, int size)
{
	int	pos_x;
	int	pos_y;
	int	*array;

	array = (int *) malloc(4 * sizeof(int));
	pos_x = 0;
	pos_y = 0;
	while (pos_y < size)
	{
		pos_x = 0;
		while (pos_x < size)
		{
			ft_remaining_conditions(grid, array, pos_x, pos_y);
			pos_x++;
		}
		pos_y++;
	}
	return (array);
}

int	*ft_create_remaining_array(int *array, int remaining)
{
	int	contador;
	int	*remaining_array;
	int	insert;
	int	copy;

	insert = 1;
	contador = 0;
	remaining_array = (int *) malloc(remaining * sizeof(int));
	copy = array[0];
	while (contador < remaining)
	{
		remaining_array[contador] = insert;
		copy--;
		if (copy == 0)
		{
			insert++;
			copy = array[insert - 1];
		}
		contador++;
	}
	return (remaining_array);
}

int	*ft_check_remaining(int *array, int size)
{
	int	*new_array;
	int	remaining;
	int	*return_array;

	new_array = (int *) malloc(4 * sizeof(int));
	new_array[0] = size - array[0];
	new_array[1] = size - array[1];
	new_array[2] = size - array[2];
	new_array[3] = size - array[3];
	remaining = new_array[0] + new_array[1] + new_array[2] + new_array[3];
	return_array = ft_create_remaining_array(new_array, remaining);
	return (return_array);
}
