/**
 * Project Untitled
 */


#include "Animal.h"
#include <iostream>
 /**
  * Animal implementation
  */


Animal::Animal()
    : Animal("","","")
{
    std::cout << "Je suis un simple animal " << std::endl;
}

Animal::Animal(std::string p_sNom, std::string p_sEspece, std::string p_sContinent)
    : m_sNom(p_sNom)
    , m_sEspece(p_sEspece)
    , m_sContinent(p_sContinent)
{
}

void Animal::AfficherInfos() {

    std::cout << "Je m'appelle " << m_sNom << ", je suis un " << m_sEspece << ", et je suis né en " << m_sContinent << std::endl;

}

std::string Animal::RecupInfo()
{
    return m_sNom + " qui est un " + m_sEspece + "et qui vit en " + m_sContinent;
}
