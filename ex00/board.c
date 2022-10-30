/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:26:50 by antgalan          #+#    #+#             */
/*   Updated: 2022/10/30 16:52:24 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	is_number(char c);

void	print_row(int *row, int n)
{
	char	num;
	int		i;

	i = 0;
	while (i < n)
	{
		num = '0' + row[i];
		write(1, &num, 1);
		if (i < n - 1)
			write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

int	**create_board(char *input, int n)
{
	int	**board;
	int	num;
	int	i;
	int	j;

	i = 0;
	num = 0;
	board = (int **) malloc(4 * sizeof(int *));
	while (i < n)
	{
		j = 0;
		board[i] = (int *) malloc(4 * sizeof(int));
		while (j < n)
		{
			board[i][j] = (int) input[num] - '0';
			num += 2;
			j++;
		}
		i++;
	}
	return (board);
}

void	print_board(int **board, int n)
{
	int	i;

	i = 0;
	while (i < n)
		print_row(board[i++], n);
}
