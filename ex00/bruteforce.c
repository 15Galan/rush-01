/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruteforce.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciriso-e <ciriso-e@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:08:17 by ciriso-e          #+#    #+#             */
/*   Updated: 2022/10/30 20:08:18 by ciriso-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	**ft_init_grid(int size);
int	is_solution(int **borders, int **board, int n);

int	ft_bruteforce_loop(int **board, int* remaining_array, int **clues, int size)
{
	int pos_x;
	int pos_y;
	int numbers;

	pos_x = 0;
	pos_y = 0;
	while (pos_y < size)
	{
		pos_x = 0;
		while (pos_x < size)
		{
			
			pos_x++;
		}
		pos_y = 0;
	}
	return (1);
}

void	ft_init_bruteforce(int **board, int* remaining_array, int **clues, int size)
{
	int solucion;

	solucion = 0;
	//solucion = ft_bruteforce_loop(board, remaining_array, clues, size);
}