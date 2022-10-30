/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:36:39 by antgalan          #+#    #+#             */
/*   Updated: 2022/10/30 16:18:07 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOARD_H
# define BOARD_H

/**
 * @brief   Print a board's row.
 * 
 * @param row   Row to print.
 * @param n		Board's dimension.
 */
void	print_row(int *row, int n);

/**
 * @brief	Construct a board with borders.
 * 
 * @param input		Border values.
 * @param n			Board's dimension.
 * 
 * @return	Pointer to the board. 
 */
int		**create_board(char *input, int n);

/**
 * @brief	Print a board's content.
 * 
 * @param board		Board to print.
 * @param n			Board's dimension.
 */
void	print_board(int **board, int n);

#endif
