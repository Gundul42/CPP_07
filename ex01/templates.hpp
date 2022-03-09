/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:24:46 by graja             #+#    #+#             */
/*   Updated: 2022/03/09 14:30:25 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_H
# define TEMPLATES_H

typedef	struct s_test
{
	std::string	name;
	int			num;
	bool			val;
}	t_test;

template <typename T, typename U, typename V>
void	iter(T & adress, U & length, V & func)
{
	while (length > 0)
	{
		func(adress);
		adress++;
		length--;
	}
}

#endif
