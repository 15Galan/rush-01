/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:42:10 by antgalan          #+#    #+#             */
/*   Updated: 2022/10/30 23:13:44 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_down(int border, int **board, int col, int n)
{
	int	jumps;
	int	i;

	i = 0;
	jumps = 1;
	while (board[i][col] < n)
	{
		if (board[i][col] < board[i + 1][col])
			jumps++;
		i++;
	}
	if (jumps == border)
		return (1);
	return (0);
}

int	check_up(int border, int **board, int col, int n)
{
	int	jumps;
	int	i;

	i = n - 1;
	jumps = 1;
	while (board[i][col] < n)
	{
		if (board[i][col] < board[i - 1][col])
			jumps++;
		i--;
	}
	if (jumps == border)
		return (1);
	return (0);
}

int	check_right(int border, int **board, int row, int n)
{
	int	jumps;
	int	i;

	i = 0;
	jumps = 1;
	while (board[row][i] < n)
	{
		if (board[row][i] < board[row][i + 1])
			jumps++;
		i++;
	}
	if (jumps == border)
		return (1);
	return (0);
}

int	check_left(int border, int **board, int row, int n)
{
	int	jumps;
	int	i;

	i = n - 1;
	jumps = 1;
	while (board[row][i] < n)
	{
		if (board[row][i] < board[row][i - 1])
			jumps++;
		i--;
	}
	if (jumps == border)
		return (1);
	return (0);
}

int	is_solution(int **borders, int **board, int n)
{
	int	sol;
	int	i;

	sol = 1;
	i = 0;
	while (i < n && sol)
	{
		sol *= check_down(borders[0][i], board, i, n);
		sol *= check_up(borders[1][i], board, i, n);
		sol *= check_right(borders[2][i], board, i, n);
		sol *= check_left(borders[3][i], board, i, n);
		i++;
	}
	return (sol);
}
