/**
 * Project Untitled
 */


#include <iostream>
#include "Association.h"
#include "Peluche.h"
 /**
  * Association implementation
  */


Association::Association()
{
}

/**
 * @param p_Gadget
 */
void Association::Vendre(Gadget p_Gadget) {

}

void Association::AjoutAnimal()
{
    std::cout << "Donner le nom, l'espece et le continent de votre animal" << std::endl;
    std::string nom, espece, continent;
    std::cin >> nom >> espece >> continent;
    m_AnimalArray.push_back(new Animal(nom, espece, continent));
}

void Association::AjoutGadget()
{
    std::cout << "Donner le nom, le prix de ce gadget" << std::endl;
    std::string nom;
    int prix;
    std::cin >> nom >> prix;


    std::cout << "Donner l'index de l'animal à relier à ce gadget" << std::endl;
    for (auto animal : m_AnimalArray) {
        static int i = 0;
        std::cout << i << " : " << animal->getNom() << std::endl;
        i++;
    }
    int indexSelect;
    std::cin >> indexSelect;

    m_GadetsArray.push_back(new Gadget(prix, nom, m_AnimalArray[indexSelect]));

}

void Association::AjoutPeluche()
{

    std::cout << "Donner le prix de cette peluche" << std::endl;
    int prix;
    std::cin >> prix;

    std::cout << "Donner l'index de l'animal à relier à cette peluche" << std::endl;
    int i = 0;
    for (auto animal : m_AnimalArray) {
        std::cout << i << " : " << animal->getNom() << std::endl;
        i++;
    }
    int indexSelect;
    std::cin >> indexSelect;

    Peluche* maPeluche = new Peluche(prix, m_AnimalArray[indexSelect]);
    m_GadetsArray.push_back(maPeluche);
    maPeluche->AfficherInfos();
}

void Association::AfficherAnimaux()
{
    for (auto animal : m_AnimalArray) {
        animal->AfficherInfos();
    }
}
void Association::AfficherGadgets()
{
    for (auto gadget : m_GadetsArray) {
        gadget->AfficherInfos();
    }
}
