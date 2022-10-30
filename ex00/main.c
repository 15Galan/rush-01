/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:18:24 by antgalan          #+#    #+#             */
/*   Updated: 2022/10/30 09:23:30 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "inputs.h"

int	main(int args, char **argv)
{
	if (args != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	else if (!is_valid_input(argv[1]))
	{
		write(1, "Error\n", 6);
		return (2);
	}
	write(1, "Valid input: ", 13);
	write(1, argv[1], 32);
	return (0);
}
