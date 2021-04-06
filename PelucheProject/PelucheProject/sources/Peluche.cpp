/**
 * Project Untitled
 */

#include <typeinfo>
#include <iostream>
#include "Peluche.h"

/**
 * Peluche implementation
 */


Peluche::Peluche() :
    Gadget(0, "",nullptr) {

}

Peluche::Peluche(int p_iPrix, Animal* p_Animal) : 
    Gadget(p_iPrix, typeid(this).name(), p_Animal)
{
    
}                                              

void Peluche::AfficherInfos() {
    std::cout << "Je suis une peluche de : " << m_Animal->RecupInfo() << std::endl;
}