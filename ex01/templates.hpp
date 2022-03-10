/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:24:46 by graja             #+#    #+#             */
/*   Updated: 2022/03/10 14:38:12 by graja            ###   ########.fr       */
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

/* Templates are not functions with local variables !
 * if the original values are needed you have to
 * save them.
*/
template <typename T, typename U, typename V>
void	iter(T & adress, U & length, V & func)
{
	T	tmp;
	U	cpy;

	cpy = length;
	tmp = adress;
	while (length > 0)
	{
		func(adress);
		adress += 1;
		length--;
	}
	adress = tmp;
	length = cpy;
}

#endif
