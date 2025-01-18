/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:28:44 by hmateque          #+#    #+#             */
/*   Updated: 2025/01/14 18:23:12 by hmateque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Circle
{
    private:
        double radius;
    public:
        void setRadius(double r)
        {
            radius = r;
        }
        
        double getRadius() const
        {
            return (3.14159 * radius * radius);
        }

};

int main(void)
{
    Circle myCircle;

    myCircle.setRadius(10);

    std::cout << "Area of the circle: " << myCircle.getRadius() << std::endl;
    return (0);
}