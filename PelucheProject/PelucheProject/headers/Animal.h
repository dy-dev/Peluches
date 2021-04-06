/**
 * Project Untitled
 */


#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <string>

class Animal {
    std::string m_sEspece;
    std::string m_sNom;
    std::string m_sContinent;

public:
    Animal();
    Animal(std::string p_sNom, std::string p_sEspece, std::string p_sContinent);
    void AfficherInfos();
    const std::string getNom() const {
        return m_sNom;
    };

    std::string RecupInfo();
};

#endif //_ANIMAL_H