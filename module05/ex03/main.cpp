/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:11:54 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/12 00:09:53 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void){
    
    // ShrubberyCreationForm test
    try {
        Bureaucrat bur("BUREAUCRAT", 143);
        ShrubberyCreationForm shru("home");

        shru.beSigned(bur);
        bur.signForm(shru);
        shru.execute(bur);
        // bur.executeForm(shru);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    //RobotomyRequestForm  test 
    try {
        Bureaucrat bur2("BUREAUCRAT", 30);
        RobotomyRequestForm rob("bender");

        rob.beSigned(bur2);
        bur2.signForm(rob);
        rob.execute(bur2);
        // bur2.executeForm(rob);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    //PresidentialPardonForm test
    try {
        Bureaucrat bur3("BUREAUCRAT", 2);
        PresidentialPardonForm pres("prisoner");

        pres.beSigned(bur3);
        bur3.signForm(pres);
        pres.execute(bur3);
        // bur3.executeForm(pres);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
