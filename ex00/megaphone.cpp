/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armandanger <armandanger@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 23:36:56 by armandanger       #+#    #+#             */
/*   Updated: 2024/04/14 23:36:59 by armandanger      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int i = 0;

	if (ac != 2)
	{
		std::cout << "1 argument required" << std::endl;
		return 1;
	}
	std::string str(av[1]);
	while(str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	std::cout << str << std::endl;
}