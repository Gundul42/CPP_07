/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:24:46 by graja             #+#    #+#             */
/*   Updated: 2022/03/10 14:55:52 by graja            ###   ########.fr       */
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
void	iter(T const & adress, U const & length, V const & func)
{
	T	adr = adress;
	U	cpy = length;

	while (cpy > 0)
	{
		func(adr);
		adr += 1;
		cpy--;
	}
}

#endif
