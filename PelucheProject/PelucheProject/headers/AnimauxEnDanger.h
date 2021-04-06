/**
 * Project Untitled
 */


#ifndef _ANIMAUXENDANGER_H
#define _ANIMAUXENDANGER_H

#include "Animal.h"


class AnimauxEnDanger: public Animal {
public: 
    int m_iNbRepresentantRestant;
    
void AfficherInfos();
};

#endif //_ANIMAUXENDANGER_H