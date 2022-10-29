/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciriso-e <ciriso-e@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:35:13 by ciriso-e          #+#    #+#             */
/*   Updated: 2022/10/29 13:03:10 by ciriso-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	ft_init(int size, int **clues);
//int argc, char **args
int	main()
{

	int colup[] = {4, 3, 2, 1};
	//int colup[4];
	int coldown[] = {1, 2, 2, 2};
	int rowleft[] = {4, 3, 2, 1};
	int rowright[] = {1, 2, 2, 2};

	//colup = (int *) malloc(16);

	int *colupp;
	int *coldownp;
	int *rowleftp;
	int *rowrightp;

	colupp = &colup[0];
	coldownp = &coldown[0];
	rowleftp = &rowleft[0];
	rowrightp = &rowright[0];

	int *clues[] = {colupp, coldownp, rowleftp, rowrightp};
	int **cluesp = &clues[0]; 
/* 
	int clues[4][4] = {
		{4, 3, 2, 1},
		{1, 2, 2, 2},
		{4, 3, 2, 1},
		{1, 2, 2, 2}
	};
	int *cluesp;

	cluesp = &clues[0][0]; */

	ft_init(4, cluesp);
	return(0);		
}
