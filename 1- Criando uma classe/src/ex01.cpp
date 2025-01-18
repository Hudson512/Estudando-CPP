/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:14:20 by hmateque          #+#    #+#             */
/*   Updated: 2025/01/14 14:25:01 by hmateque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
o que é classe?
    Classe é uma unidade fundamental da POO e é um modelo de objetos.
    É um tipo de dado definido pelo usuário, que define suas propriedades e sua função (método).

o que é objeto?
    Um objeto é uma entidade que possui um estado, propriedade e comportamento.
    O objeto é uma variável do tipo de dados class.
*/

class Fruit{
    public:
        std::string name;
        std::string color;
};

int main(void)
{
    Fruit apple;
    Fruit *mango;
    
    apple.name = "apple";
    apple.color = "red";
    std::cout << " ---------------------------------------- " << std::endl;
    std::cout << "\t\tName: " << apple.name << std::endl;
    std::cout << "\t\tColor: " << apple.color << std::endl;
    std::cout << " ---------------------------------------- " << std::endl;

    mango = new Fruit();
    mango->name = "mango";
    mango->color = "yellow";
    std::cout << " ---------------------------------------- " << std::endl;
    std::cout << "\t\tName: " << mango->name << std::endl;
    std::cout << "\t\tColor: " << mango->color << std::endl;
    std::cout << " ---------------------------------------- " << std::endl;
    
    return (0);
}
