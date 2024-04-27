/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranger <aranger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:15:17 by aranger           #+#    #+#             */
/*   Updated: 2024/04/27 15:19:19 by aranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
# include "Contact_class.hpp"

std::string	get_info(std::string req);
void		print_contacts(Contact *rep);
std::string	get_number(std::string req);

class PhoneBook_class
{
	public:
		PhoneBook_class();
		~PhoneBook_class();
		Contact rep[8];
		void	add_contact();
		void	search();
};

#endif