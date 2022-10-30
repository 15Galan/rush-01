/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciriso-e <ciriso-e@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:11:33 by ciriso-e          #+#    #+#             */
/*   Updated: 2022/10/30 19:11:35 by ciriso-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_show_grid(int **grid, int size)
{
	int	pos_x;
	int	pos_y;

	pos_x = 0;
	pos_y = 0;
	while (pos_y < size)
	{
		while (pos_x < size)
		{
			printf("%d ", grid[pos_y][pos_x]);
			pos_x++;
		}
		printf("\n");
		pos_x = 0;
		pos_y++;
	}
}
