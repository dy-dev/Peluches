/**
 * Project Untitled
 */


#ifndef _ANIMAUXENDANGER_H
#define _ANIMAUXENDANGER_H

#include "Animal.h"


class AnimauxEnDanger: public Animal {
    int m_iNbRepresentantRestant;
public: 
    AnimauxEnDanger();
void AfficherInfos();
};

#endif //_ANIMAUXENDANGER_H