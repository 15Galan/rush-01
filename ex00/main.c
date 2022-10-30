/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:18:24 by antgalan          #+#    #+#             */
/*   Updated: 2022/10/30 17:27:14 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <unistd.h>
#include "inputs.h"
#include "board.h"

void	ft_init(int size, int **clues);

int	main(int args, char **argv)
{
	int	**board;
	int	n;

	if (args != 2 || !is_valid_input(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	n = calculate_n(argv[1]);
	board = create_board(argv[1], n);
	ft_init(n, board);
	return (0);
}
