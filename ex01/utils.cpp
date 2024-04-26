/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranger <aranger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:13:55 by aranger           #+#    #+#             */
/*   Updated: 2024/04/26 17:08:34 by aranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_class.hpp"
#include "Contact_class.hpp"

std::string	str_rsz(std::string in)
{
	if (in.length() > 10)
	{
		in.resize(9);
		in.append(".");
	}
	return in;
}

void	print_contacts(PhoneBook_class phone)
{
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|   index  |first name|last name | nickname |" << std::endl;
	for(int i = 0; i < 8; i++)
	{
		std::cout << "|    " << i << "   |" << str_rsz(phone.rep[i].firstname) <<
	}
	
}

std::string	get_info(std::string req)
{
	std::string	input;

	while (1)
	{
		std::cout << req;
		std::getline(std::cin, input);
		if (input.empty() == false)
			break;
	}
	return input;
}