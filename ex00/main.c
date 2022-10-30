/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:18:24 by antgalan          #+#    #+#             */
/*   Updated: 2022/10/30 17:10:24 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include "inputs.h"
#include "board.h"

void	ft_init(int size, int **clues);
int		**create_board(char **input, int n);

int	main(int args, char **argv)
{
	int	**board;
	if (args != 2 || !is_valid_input(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else
		write(1, "Valid\n", 6);
	board = create_board(&argv[1], 4);
	ft_init(4, board);
	return (0);
}
