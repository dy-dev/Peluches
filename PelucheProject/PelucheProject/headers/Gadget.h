/**
 * Project Untitled
 */


#ifndef _GADGET_H
#define _GADGET_H

#include <string>
#include "Animal.h"


class Gadget {

protected:
    int m_iPrix;
    std::string m_sNom;
    Animal* m_Animal;

public:
    Gadget(int p_iPrix, std::string p_sNom, Animal* p_pAnimal);
    void AfficherInfos();
};

#endif //_GADGET_H