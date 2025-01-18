/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:28:44 by hmateque          #+#    #+#             */
/*   Updated: 2025/01/14 17:34:45 by hmateque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Car{
    private:
        std::string brand;
        int year;
        
    public:
        void setBrand(const std::string &carBrand)
        {
            brand = carBrand;
        }

        void setYear(const int carYear)
        {
            year = carYear;
        }

        std::string getBrand() const
        {
            return brand;
        }

        int getYear() const
        {
            return year;
        }
};

int main(void)
{
    Car myCar;
    
    
    myCar.setBrand("Ford");
    myCar.setYear(2021);
    
    std::cout << "Marca: " << myCar.getBrand() << std::endl;
    std::cout << "Ano: " << myCar.getYear() << std::endl;
    return (0);
}