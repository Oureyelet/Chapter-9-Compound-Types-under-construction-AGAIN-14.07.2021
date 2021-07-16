#include <iostream>

#ifndef ENUM_1
#define ENUM_1

enum Days : int
{
    day_monday,
    day_tuesday,
    day_wednesday,
    day_thursday,
    day_friday,
    day_saturday,
    day_sunday,
};

void printDay(Days single)
{
    switch(single)
    {
        case day_monday:
            std::cout << "Monday";
            break;
        case day_tuesday:
            std::cout << "Tuesday";
            break;
        case day_wednesday:
            std::cout << "Wednesday";
            break;
        case day_thursday:
            std::cout << "Thursday";
            break;
        case day_friday:
            std::cout << "Friday";
            break;
        case day_saturday:
            std::cout << "Saturday";
            break;
        case day_sunday:
            std::cout << "Sunday";
            break;
        default:
            std::cout << "??";
    }
}

enum Monster_races
{
    monster_orc,
    monster_goblin,
    monster_troll,
    monster_ogre,
    monster_skeleton
};

#endif // end ENUM_1