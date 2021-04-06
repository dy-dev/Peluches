/**
 * Project Untitled
 */


#ifndef _PELUCHE_H
#define _PELUCHE_H

#include "Gadget.h"
#include "Animal.h"
#include "Etiquette.h"


class Peluche: public Gadget {
public: 
    Animal m_Animal;
    Etiquette m_Etiquette;
    
void AfficherInfos();
};

#endif //_PELUCHE_H