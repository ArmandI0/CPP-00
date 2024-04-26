/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranger <aranger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:33:17 by armandanger       #+#    #+#             */
/*   Updated: 2024/04/26 16:49:34 by aranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
# include "Contact_class.hpp"

class PhoneBook_class
{
	public:
		PhoneBook_class();
		~PhoneBook_class();
		Contact rep[8];
		
		void	add_contact()
		{
			static int i = 0;

			if (i == 7)
				i = 0;
			rep[i].firstname = get_info("Firstname :");
			rep[i].lastname = get_info("Lastname :");
			rep[i].nickname = get_info("Nickname :");
			rep[i].phone_number = get_info("Phone number :");
			rep[i].darkest_scrt = get_info("Darkest secret :");
		}
	
};


#endif