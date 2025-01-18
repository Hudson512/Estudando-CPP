/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:28:44 by hmateque          #+#    #+#             */
/*   Updated: 2025/01/14 17:22:14 by hmateque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Car{
    public:
        std::string brand;
        int year;
};

int main()
{
    Car myCar;

    myCar.brand = "Ford";
    myCar.year = 2021;
    std::cout << "Marca: " << myCar.brand << std::endl;
    std::cout << "Ano: " << myCar.year << std::endl;
    return (0);
}