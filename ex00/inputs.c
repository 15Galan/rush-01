/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:02:07 by antgalan          #+#    #+#             */
/*   Updated: 2022/10/29 16:37:02 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief   Checks if a character is a number.
 * 
 * @param c     Character to check.
 * 
 * @return  '1' if it's a character; '0' otherwise.
 */
int	is_number(char c)
{
	return ('0' <= c && c <= '9');
}

/**
 * @brief	Calculates the 'n' value from 'nxn' dimension of a problem.
 * 			'n' must be strictly positive.
 * 
 * @param input		The 'string' to analyze.
 * 
 * @return	'n' value, if possible; '0' otherwise;
*/
int	calculate_n(char *input)
{
	int	x;
	int	n;

	x = 0;
	while (*input)
	{
		if (is_number(*input))
			x++;
		input++;
	}
	n = 1;
	while (n * n != x)
	{
		if (n * n == x)
			return (n);
		else if (x < n * n)
			return (0);
		n++;
	}
	return (0);
}

/**
 * @brief   Checks if a column/row value is a valid
 *          one for a nxn instance of the problem.
 * 
 * @param num   Value to check.
 * @param n     Problem dimension.
 * 
 * @return  '1' if valid; '0' otherwise.
 */
int	is_valid_number(char num, int n)
{
	return ('1' <= num && num <= ('0' + n));
}

/**
 * @brief   Checks if an input is valid.
 * 
 * @param input	Input to check.
 * @param n     Problem dimension.
 * 
 * @return  '1' if valid; '0' otherwise.
 */
int	valid_input(char *input)
{
	int	n;

	n = calculate_n(input);
	if (0 < n)
	{
		while (*input)
		{
			if (!is_number(*input))
				input++;
			else if (!is_valid_number(*input, n))
				return (0);
		}
	}
	return (1);
}
