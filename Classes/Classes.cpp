// Classes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>


// private par default, struct public par default
class Personnage
{
public : // pour comprendre l'exemple accessible partout
    // ATTRIBUT (privee)
    unsigned int m_pdv;
    unsigned int m_vitessedep;
    unsigned int m_level;
    unsigned int m_x, m_y;


    // METHODS
    void seDeplacer(unsigned int x, unsigned int y)
    {
        m_x += x;
        m_y += y;
    }

    void incrementlvl(unsigned int x, unsigned int y)
    {
        m_level++;
    }


};




int main()
{
    Personnage joueur1;
    joueur1.m_pdv = 100;
    joueur1.m_vitessedep = 10;
    joueur1.m_level = 1;
    joueur1.m_x = 0;
    joueur1.m_y = 0;

    std::cout << joueur1.m_pdv << std::endl;
    std::cout << joueur1.m_vitessedep << std::endl;
    std::cout << joueur1.m_level << std::endl;

    joueur1.seDeplacer(2, 3);

    std::cout << joueur1.m_x << " " << joueur1.m_y << std::endl;
}

