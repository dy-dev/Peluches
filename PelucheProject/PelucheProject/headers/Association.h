/**
 * Project Untitled
 */


#ifndef _ASSOCIATION_H
#define _ASSOCIATION_H

#include "Animal.h"
#include "Gadget.h"
#include <vector>   

class Association {
public: 
    int m_iArgent;
    std::vector<Animal> m_AnimalArray;
    std::vector<Gadget> m_GadetsArray;

    
/**
 * @param p_Gadget
 */
void Vendre(Gadget p_Gadget);
};

#endif //_ASSOCIATION_H