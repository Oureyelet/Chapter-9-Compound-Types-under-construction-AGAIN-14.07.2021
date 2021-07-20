#include <iostream>
#include <string>

struct Monsters
{
    std::string name{};
    int hp{};
};

enum class Monsters_type
{
    an_ogre,
    a_dragon,
    an_orc,
    a_giant_spider,
    a_slime,
};

void printMonster(Monsters_type monster, Monsters moninfo)
{
    switch(monster)
    {
        case Monsters_type::an_ogre:
            std::cout << "This Ogre is named " << moninfo.name << " and has " << moninfo.hp << "  health." << '\n';
        break;

        case Monsters_type::a_dragon:
            std::cout << "This Dragon is named " << moninfo.name << " and has " << moninfo.hp << "  health." << '\n';
        break;

        case Monsters_type::an_orc:
            std::cout << "This Orc is named " << moninfo.name << " and has " << moninfo.hp << "  health." << '\n';
        break;

        case Monsters_type::a_giant_spider:
            std::cout << "This Giant Spider is named " << moninfo.name << " and has " << moninfo.hp << "  health." << '\n';
        break;

        case Monsters_type::a_slime:
            std::cout << "This Slime is named " << moninfo.name << " and has " << moninfo.hp << "  health." << '\n';
        break;
        
        default:
            std::cout << "Something went wrong" << '\n';
    }
}

int main()
{

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Quiz time" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Question #1

    In designing a game, we decide we want to have monsters, because everyone likes fighting monsters. 
    Declare a struct that represents your monster. The monster should have a type that can be one of 
    the following: an ogre, a dragon, an orc, a giant spider, or a slime. Use an enum class for this.

    Each individual monster should also have a name (use a std::string), as well as an amount of 
    health that represents how much damage they can take before they die. Write a function named 
    printMonster() that prints out all of the struct’s members. Instantiate an ogre and a slime, 
    initialize them using an initializer list, and pass them to printMonster().

    Your program should produce the following output:

    This Ogre is named Torg and has 145 health.
    This Slime is named Blurp and has 23 health.
    */

    Monsters ogre{"jajko", 123};
    Monsters slime{"slimak", 234};

    printMonster(Monsters_type::an_ogre, ogre);
    printMonster(Monsters_type::a_slime, slime);




    return 0;
}