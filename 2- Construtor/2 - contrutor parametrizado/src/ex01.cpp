/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:28:44 by hmateque          #+#    #+#             */
/*   Updated: 2025/01/14 18:33:38 by hmateque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Rectangle{
    public:
        int length;
        int breadth;

        Rectangle(int x, int y){
            length = x;
            breadth = y;
        }
};

int main()
{
    Rectangle rect(10, 5);
    
    std::cout << "Length: " << rect.length << std::endl;
    std::cout << "Breadth: " << rect.breadth << std::endl;
    return (0);
}