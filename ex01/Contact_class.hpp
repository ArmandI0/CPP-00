/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranger <aranger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:23:20 by armandanger       #+#    #+#             */
/*   Updated: 2024/04/26 16:22:53 by aranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <string>
# include <iostream>
# include <string>
# include "utils.cpp"

class Contact
{
	public:
		Contact();
		~Contact();
		
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_scrt;

	private:
	
};


#endif