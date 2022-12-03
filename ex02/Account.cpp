/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:51:37 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/03 23:21:02 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	main()
{
	std::time_t	tt;
	std::tm *t;

	tt = std::time(0);
	t = std::localtime(&tt);
	std::cout << t->mon << std::endl;
	return 0;
}
