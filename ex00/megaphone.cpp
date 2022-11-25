/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:57:53 by ssadiki           #+#    #+#             */
/*   Updated: 2022/11/16 17:32:08 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*to_upper(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (*(argv + 1))
		{
			std::cout << to_upper(*(argv + 1));
			argv++;
		}
		std::cout << std::endl;
	}
	return (0);
}
