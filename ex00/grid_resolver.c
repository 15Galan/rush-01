/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_resolver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:06:52 by ciriso-e          #+#    #+#             */
/*   Updated: 2022/10/30 23:29:57 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_fill_with_n(int **grid, int pos, int axis);
void	ft_put_one_two_clues(int **grid, int pos, int axis, int size);
void	ft_put_three_two_on_board(int **grid, int pos, int axis, int size);
void	ft_show_grid(int **grid, int size);
void	ft_fill_with_1_to_n(int **grid, int pos, int axis, int size);
int		*ft_check_inserted(int **grid, int size);
int		*ft_check_remaining(int *array, int size);

int	**ft_init_grid(int size)
{
	int	counter;
	int	**arr;
	int	cleaner;
	int	x;

	cleaner = 0;
	counter = 0;
	arr = (int **) malloc(4 * sizeof(int *));
	while (counter < size)
	{
		x = 0;
		arr[counter] = (int *) malloc(4 * sizeof(int));
		while (x < size)
		{
			arr[counter][x] = 0;
			x++;
		}
		counter++;
	}
	return (arr);
}

void	ft_clues_one_and_two(int **grid, int **clues, int size, int axis)
{
	int	pos;

	pos = 0;
	while (pos < size)
	{
		if (clues[axis][pos] == 1 && clues[axis + 1][pos] == 2)
		{
			ft_put_one_two_clues(grid, pos, axis, size);
		}
		else if (clues[axis][pos] == 2 && clues[axis + 1][pos] == 1)
		{
			ft_put_one_two_clues(grid, pos, axis + 1, size);
		}		
		pos++;
	}
}

void	ft_clues_three_and_two(int **grid, int **clues, int size, int axis)
{
	int	pos;

	pos = 0;
	while (pos < size)
	{
		if (clues[axis][pos] == 3 && clues[axis + 1][pos] == 2)
		{
			ft_put_three_two_on_board(grid, pos, axis, size);
		}
		else if (clues[axis][pos] == 2 && clues[axis + 1][pos] == 3)
		{
			ft_put_three_two_on_board(grid, pos, axis + 1, size);
		}		
		pos++;
	}
}

void	ft_clues_on_one_axis(int **grid, int **clues, int size, int axis)
{
	int	pos;

	pos = 0;
	while (pos < size)
	{
		if (clues[axis][pos] == size && clues[axis + 1][pos] == 1)
		{
			ft_fill_with_1_to_n(grid, pos, axis + 1, size);
		}
		else if (clues[axis][pos] == 1 && clues[axis + 1][pos] == size)
		{
			ft_fill_with_1_to_n(grid, pos, axis, size);
		}
		if (clues[axis][pos] == 1 && clues[axis + 1][pos] != size)
		{
			ft_fill_with_n(grid, pos, axis);
		}
		else if (clues[axis + 1][pos] == 1 && clues[axis][pos] != size)
		{
			ft_fill_with_n(grid, pos, axis + 1);
		}
		pos++;
	}
}

int	**ft_init(int size, int **clues)
{
	int	**grid;
	int	*count_arr;
	int	contador;
	int	*remaining_array;

	contador = 0;
	grid = ft_init_grid(size);
	ft_clues_on_one_axis(grid, clues, size, 0);
	ft_clues_on_one_axis(grid, clues, size, 2);
	ft_clues_three_and_two(grid, clues, size, 0);
	ft_clues_three_and_two(grid, clues, size, 2);
	ft_clues_one_and_two(grid, clues, size, 0);
	ft_clues_one_and_two(grid, clues, size, 2);
	count_arr = ft_check_inserted(grid, size);
	remaining_array = ft_check_remaining(count_arr, size);
	return (grid);
}
