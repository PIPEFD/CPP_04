/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:28:23 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/18 11:48:41 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H

#define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string ideas[100];
    
    public:
        Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &rhs);
        ~Brain();

        std::string getIdea(int index) const;
        void setIdea(int index, const std::string &idea);
    
};

#endif