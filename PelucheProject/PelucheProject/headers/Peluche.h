/**
 * Project Untitled
 */


#ifndef _PELUCHE_H
#define _PELUCHE_H

#include "Gadget.h"
#include "Animal.h"
#include "Etiquette.h"


class Peluche : public Gadget {
    Etiquette* m_Etiquette;
public:

    Peluche();
    Peluche(int p_iPrix, Animal* p_Animal);

    void AfficherInfos();
};

#endif //_PELUCHE_H