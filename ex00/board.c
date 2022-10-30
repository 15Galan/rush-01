/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:26:50 by antgalan          #+#    #+#             */
/*   Updated: 2022/10/30 13:47:29 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_row(int *row, int n)
{
	char	num;
	int		i;

	i = 0;
	while (i < n)
	{
		num = '0' + row[i];
		write(1, num, 1);
	}
	write(1, "\n", 1);
}

int	**create_board(char **input, int n)
{
	int	**board;
	int	num;
	int	i;
	int	j;

	board = (int **) malloc(n * sizeof(int *));
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			board[i][j] = input[i][j] - '0';
			j++;
		}
		i++;
	}
	return (board);
}

void	**print_board(int **board, int n)
{
	int	i;

	i = 0;
	while (i < n)
		print_row(board[i++], n);
}