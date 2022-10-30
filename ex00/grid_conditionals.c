/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_conditionals.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciriso-e <ciriso-e@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:50:23 by ciriso-e          #+#    #+#             */
/*   Updated: 2022/10/30 15:50:26 by ciriso-e         ###   ########.fr       */
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
