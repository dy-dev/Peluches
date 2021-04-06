/**
 * Project Untitled
 */


#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <string>

class Animal {
public: 
    std::string m_sEspece;
    std::string m_sNom;
    std::string m_sContinent;
    
void AfficherInfos();
};

#endif //_ANIMAL_H