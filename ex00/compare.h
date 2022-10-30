/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jicortes <jicortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:08:34 by jicortes          #+#    #+#             */
/*   Updated: 2022/10/30 20:25:29 by jicortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPARE_H
# define COMPARE_H

/**
 * @brief   Check if the total of parallels is (3, n+1).
 * 
 * @param size   Size of array.
 * @param clues		Array to use.
 */
int	extremos(int size, int **clues);

/**
 * @brief   Check if corners with 1 are always (1,1).
 * 
 * @param size   Size of array.
 * @param clues		Array to use.
 */
int	one_one(int size, int **clues);

/**
 * @brief   Check if corners don't contain (1, n).
 * 
 * @param size   Size of array.
 * @param clues		Array to use.
 */
int	one_n(int size, int **clues);

/**
 * @brief   Check if contain minimum one 1 and maximum one n.
 * 
 * @param size   Size of array.
 * @param clues		Array to use.
 */
int	minmaxborder(int size, int **clues);

/**
 * @brief   Check if the board is complete.
 * 
 * @param size   Size of array.
 * @param clues		Array to use.
 */
int	board_verify(int size, int **clues);

#endif
