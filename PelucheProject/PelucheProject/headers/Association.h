/**
 * Project Untitled
 */


#ifndef _ASSOCIATION_H
#define _ASSOCIATION_H

#include "Animal.h"
#include "Gadget.h"
#include <vector>   

class Association {
    int m_iArgent;
    std::vector<Animal*> m_AnimalArray;
    std::vector<Gadget*> m_GadetsArray;

public:

    Association();
    /**
     * @param p_Gadget
     */
    void Vendre(Gadget p_Gadget);

    void AjoutAnimal();
    void AjoutGadget();
    void AjoutPeluche();

    void AfficherAnimaux();
    void AfficherGadgets();

};

#endif //_ASSOCIATION_H