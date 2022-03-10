/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:35:45 by graja             #+#    #+#             */
/*   Updated: 2022/03/10 14:43:47 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "templates.hpp"

static
void	printit(t_test *adr, int max)
{
	int	i = 0;
	while (i < max)
	{
		std::cout << i << ") " << adr << std::endl;
		std::cout << adr->name << ", " << adr->num << ", " << adr->val << std::endl;
		std::cout << std::endl;
		adr++;
		i++;
	}
}

static
void	here_test(t_test *adr)
{
	std::cout << adr << std::endl;
	adr->name = "Default_";
	adr->num = rand() % 1000;
	adr->val = rand() % 2;
}

static
void	test(int *adr)
{
	static int	i = 0;

	std::cout << adr << " : " << *adr << " : " << i << ") Called" << std::endl;
	i++;
}

int	main(void)
{
	int			arr[5] = {12, 41, 33, 7, -12};
	int			*a;
	unsigned char	len = 5;
	t_test			arrhere[7];
	t_test			*here;
	int			here_len = 7;

	srand(time(NULL));
	a = &arr[0];
	here = &arrhere[0];
	iter(a, len, test);
	iter(here, here_len, here_test);
	printit(here, here_len);
	return (0);
}
