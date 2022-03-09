/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:35:45 by graja             #+#    #+#             */
/*   Updated: 2022/03/09 15:07:32 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "templates.hpp"

static
void	printit(t_test *adr)
{
	int	i = 0;
	while (i < 10)
	{
		std::cout << i << ") " << adr << std::endl;
		std::cout << adr->name << std::endl;
		adr++;
		i++;
	}
}

static
void	here_test(t_test *adr)
{
	adr->name = "Default";
	adr->num = 42;
	adr->val = true;
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
	int			*a[20];
	unsigned char	len = 20;
	t_test			*here = new t_test[10];
	int			here_len = 10;

	iter(a[0], len, test);
	iter(here, here_len, here_test);
	printit(here);
	return (0);
}
