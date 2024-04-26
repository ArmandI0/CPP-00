/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranger <aranger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:16:31 by armandanger       #+#    #+#             */
/*   Updated: 2024/04/26 16:44:01 by aranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_class.hpp"
#include "Contact_class.hpp"

Contact::Contact(void)
{
	firstname = "";
	lastname = "";
	nickname = "";
	phone_number = "";
	darkest_scrt = "";
}
Contact::~Contact(void){}
PhoneBook_class::PhoneBook_class(void){}
PhoneBook_class::~PhoneBook_class(void){}

int main()
{
    std::string input;
	PhoneBook_class phone;

	while(1)
	{
		std::getline(std::cin, input);

		if (input.compare("ADD") == 0)
		{
			phone.add_contact();	
		}
		if (input.compare("SEARCH") == 0)		
		{
			
		}
		if (input.compare("EXIT") == 0)
			exit(0);
		std::cout << "Vous avez entré : " << input << std::endl;
	}
    return 0;
}