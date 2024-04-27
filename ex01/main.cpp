/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranger <aranger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:16:31 by armandanger       #+#    #+#             */
/*   Updated: 2024/04/27 15:14:10 by aranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_class.hpp"
#include "Contact_class.hpp"

int main()
{
    std::string input;
	PhoneBook_class phone;

	while(1)
	{
		std::cout << "Enter a command : ";
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
			phone.add_contact();	
		}
		else if (input.compare("SEARCH") == 0)		
		{
			phone.search();
		}
		else if (input.compare("EXIT") == 0)
			exit(0);
		else
			std::cout << "Command not found" << std::endl;
	}
    return 0;
}