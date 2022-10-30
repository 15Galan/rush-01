/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_conditionals.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:50:23 by ciriso-e          #+#    #+#             */
/*   Updated: 2022/10/30 23:31:18 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_fill_with_n(int **grid, int pos, int axis)
{
	if (axis == 0)
	{
		grid[0][pos] = 4;
	}
	else if (axis == 1)
	{
		grid[4][pos] = 4;
	}
	else if (axis == 2)
	{
		grid[pos][0] = 4;
	}
	else
	{
		grid[pos][3] = 4;
	}
}

void	ft_put_one_two_clues(int **grid, int pos, int axis)
{
	if (axis == 0)
	{
		grid[0][pos] = 4;
		grid[3][pos] = 3;
	}
	else if (axis == 1)
	{
		grid[3][pos] = 4;
		grid[0][pos] = 3;
	}
	else if (axis == 2)
	{
		grid[pos][0] = 4;
		grid[pos][3] = 3;
	}
	else if (axis == 3)
	{
		grid[pos][3] = 4;
		grid[pos][0] = 3;
	}
}

void	ft_put_three_two_on_board(int **grid, int pos, int axis)
{
	if (axis == 0)
	{
		grid[2][pos] = 4;
	}
	else if (axis == 1)
	{
		grid[1][pos] = 4;
	}
	else if (axis == 2)
	{
		grid[pos][2] = 4;
	}
	else if (axis == 3)
	{
		grid[pos][1] = 4;
	}
}

void	ft_fill_with_1_to_n(int **grid, int pos, int axis, int size)
{
	int	count;
	int	while_counter;

	while_counter = 0;
	if (axis == 1 || axis == 3)
		count = 1;
	else
		count = size;
	while (while_counter < size)
	{
		if (axis == 0 || axis == 1)
		{
			grid[while_counter][pos] = count;
		}
		else
		{
			grid[pos][while_counter] = count;
		}
		if (axis == 1 || axis == 3)
			count++;
		else
			count--;
		while_counter++;
	}
}
