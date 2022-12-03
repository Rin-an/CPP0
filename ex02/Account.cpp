/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:51:37 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/03 22:58:48 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <chrono>
#include <ctime>
#include <boost>
int	main()
{
	std::chrono::system_clock::time_point time_stamp;
	std::time_t t;

	time_stamp = std::chrono::system_clock::now();
	t = std::chrono::system_clock::to_time_t(time_stamp);
	std::cout << ctime(&t) << std::endl;
	std::cout << std::time(&t) << std::endl;
}
