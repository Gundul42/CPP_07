/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:35:45 by graja             #+#    #+#             */
/*   Updated: 2022/03/12 18:13:19 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main(void)
{
	Array<int>	test(10);
	Array<int>	cpy(5);
	int			i = 0;

	cpy = test;
	test[5] = 123;
	test[9] = 100;
	test[1] = 10;
	while (i < 10)
	{
		std::cout << i << ") " << test[i] << "\t\t" << cpy[i] << std::endl;
		i++;
	}
	return (0);
}
