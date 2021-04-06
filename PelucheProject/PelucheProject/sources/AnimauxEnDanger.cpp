/**
 * Project Untitled
 */
#include <iostream>

#include "AnimauxEnDanger.h"

/**
 * AnimauxEnDanger implementation
 */


AnimauxEnDanger::AnimauxEnDanger()
{
    std::cout << "je suis un animal en danger" << std::endl;
    AfficherInfos();
}

void AnimauxEnDanger::AfficherInfos() {
    std::cout << "y a des truc en plus blah blah" << std::endl;
    Animal::AfficherInfos();
}