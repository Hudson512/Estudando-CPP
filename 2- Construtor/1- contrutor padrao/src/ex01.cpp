/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:28:44 by hmateque          #+#    #+#             */
/*   Updated: 2025/01/14 14:30:52 by hmateque         ###   ########.fr       */
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
};

int main()
{
    Rectangle rect;
    
    std::cout << "Length: " << rect.length << std::endl;
    std::cout << "Breadth: " << rect.breadth << std::endl;
    return (0);
}