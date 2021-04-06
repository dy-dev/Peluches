/**
 * Project Untitled
 */


#include "Gadget.h"
#include <iostream>
/**
 * Gadget implementation
 */


Gadget::Gadget(int p_iPrix, std::string p_sNom, Animal* p_pAnimal)
{
    m_iPrix = p_iPrix;
    m_sNom = p_sNom;
    m_Animal = p_pAnimal;
}

void Gadget::AfficherInfos() {

    std::cout << "Je suis un(e)" << m_sNom << ", je coute " << m_iPrix << ", et je représente : \n\t"<< m_Animal->RecupInfo() << std::endl;
    
}