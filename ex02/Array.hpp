/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:24:46 by graja             #+#    #+#             */
/*   Updated: 2022/03/11 15:47:20 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <stdexcept>

template <typename T>
class Array
{
	private:
		unsigned int const	_member;
		T*				_array;

	public:
		Array(void): _member(0), _array(NULL){};
		Array(unsigned int n): _member(n), _array(new T[n]) {};
		Array(T & cpy);
		~Array(void);
		T &	operator=(T const & right);

		unsigned int	size(void);
};

#endif
