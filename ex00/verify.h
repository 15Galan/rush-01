/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:42:03 by antgalan          #+#    #+#             */
/*   Updated: 2022/10/30 20:42:29 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VERIFY_H
# define VERIFY_H

/**
 * @brief   Checks if an upper border number has correct values.
 * 
 * @param border    Border number to check.
 * @param board     Board to analyze.
 * @param col       Index of the column to check in the board.
 * @param n         Board's dimension.
 * 
 * @return  '1' if it's a valid column for the border; '0' otherwise.
 */
int	check_down(int border, int **board, int col, int n);

/**
 * @brief   Checks if a lower border number has correct values.
 * 
 * @param border    Border number to check.
 * @param board     Board to analyze.
 * @param col       Index of the column to check in the board.
 * @param n         Board's dimension.
 * 
 * @return  '1' if it's a valid column for the border; '0' otherwise.
 */
int	check_up(int border, int **board, int col, int n);

/**
 * @brief   Checks if a left border number has correct values.
 * 
 * @param border    Border value to check.
 * @param board     Board to analyze.
 * @param row       Index of the row to check in the board.
 * @param n         Board's dimension.
 * 
 * @return  '1' if it's a valid row for the border; '0' otherwise.
 */
int	check_right(int border, int **board, int row, int n);

/**
 * @brief   Checks if a right border number has correct values.
 * 
 * @param border    Border value to check.
 * @param board     Board to analyze.
 * @param row       Index of the row to check in the board.
 * @param n         Board's dimension.
 * 
 * @return  '1' if it's a valid row for the border; '0' otherwise.
 */
int	check_left(int border, int **board, int row, int n);

/**
 * @brief   Checks if a solution it's correct.
 * 
 * @param borders   Border's matrix.
 * @param board     Board to analyze.
 * @param n         Board's dimension.
 * 
 * @return  '1' if it's a valid row for the border; '0' otherwise.
 */
int	is_solution(int **borders, int **board, int n);

#endif
