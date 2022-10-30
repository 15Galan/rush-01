/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:02:07 by antgalan          #+#    #+#             */
/*   Updated: 2022/10/30 09:52:59 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char c)
{
	return ('0' <= c && c <= '9');
}

int	is_valid_number(char num, int n)
{
	return ('1' <= num && num <= ('0' + n));
}

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
	while (n * n <= x)
	{
		if (n * n == x)
			return (n);
		else if (x < n * n)
			return (0);
		n++;
	}
	return (0);
}

int	is_valid_structure(char *input)
{
	int	valid;

	if (!*input)
		return (0);
	valid = 1;
	while (*input && valid)
	{
		if (is_number(*input) && *(input + 1) == ' ')
			input += 2;
		else if (is_number(*input) && !*(input + 1))
			break ;
		else
			valid = 0;
	}
	return (valid);
}

int	is_valid_input(char *input)
{
	int	n;

	if (!is_valid_structure(input))
		return (0);
	n = calculate_n(input);
	if (n < 0)
		return (0);
	while (*input)
	{
		if (!(is_valid_number(*input, n) || *input == ' '))
			return (0);
		input++;
	}
	return (1);
}
