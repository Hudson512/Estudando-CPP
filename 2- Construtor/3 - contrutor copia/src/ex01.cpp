/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:28:44 by hmateque          #+#    #+#             */
/*   Updated: 2025/01/14 14:46:59 by hmateque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Rectangle{
    public:
        int length;
        int breadth;

        Rectangle(){
            length = 5;
            breadth = 5;
        }
        
        Rectangle(const Rectangle &rect){
            length = rect.length;
            breadth = rect.breadth;
        }
};

int main()
{
    Rectangle rect;
    std::cout << "Rectangle original" << std::endl;
    std::cout << "Length: " << rect.length << std::endl;
    std::cout << "Breadth: " << rect.breadth << std::endl;
    
    std::cout << std::endl;
    
    Rectangle rect2 = rect;
    std::cout << "Rectangle copia" << std::endl;
    std::cout << "Length: " << rect2.length << std::endl;
    std::cout << "Breadth: " << rect2.breadth << std::endl;
    return (0);
}