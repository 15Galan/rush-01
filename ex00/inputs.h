/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:02:07 by antgalan          #+#    #+#             */
/*   Updated: 2022/10/30 09:50:22 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUTS_H
# define INPUTS_H

/**
 * @brief   Checks if a character is a number.
 * 
 * @param c     Character to check.
 * 
 * @return  '1' if it's a character; '0' otherwise.
 */
int	is_number(char c);

/**
 * @brief   Checks if a column/row value is a valid
 *          one for a 'nxn' instance of the problem.
 * 
 * @param num   Value to check.
 * @param n     Problem dimension.
 * 
 * @return  '1' if valid; '0' otherwise.
 */
int	is_valid_number(char num, int n);

/**
 * @brief	Calculates the 'n' value from 'nxn' dimension of a problem.
 * 			'n' must be strictly positive.
 * 
 * @param input		The 'string' to analyze.
 * 
 * @return	'n' value, if possible; '0' otherwise;
*/
int	calculate_n(char *input);

/**
 * @brief	Checks if an argument structure is valid.
 * 			Estructure must be "n1 n2 n3 n4 n5 ...",
 * 			numbers followed by spaces, except last one.
 * 
 * @param input	Argument to check.
 * 
 * @return '1' if it's valid; '0' otherwise.
 */
int	is_valid_structure(char *input);

/**
 * @brief   Checks if an input is valid.
 * 
 * @param input	Input to check.
 * @param n     Problem dimension.
 * 
 * @return  '1' if valid; '0' otherwise.
 */
int	is_valid_input(char *input);

#endif
