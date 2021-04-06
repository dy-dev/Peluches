/**
 * Project Untitled
 */


#ifndef _GADGET_H
#define _GADGET_H

#include <string>
#include "Animal.h"


class Gadget {
public: 
    int m_iPrix;
    std::string m_sNom;
    Animal m_Animal;
    
void AfficherInfos();
};

#endif //_GADGET_H