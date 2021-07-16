#include <iostream>
#include "headerfile.h"


int main()
{
    std::cout << "Hello World" << '\n';

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "enum" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    // Define a new enumeration named Color
    enum Color
    {
        // Here are the enumerators
        // These define all the possible values this type can hold
        // Each enumerator is separated by a comma, not a semicolon
        color_black,
        color_red,
        color_blue,
        color_green,
        color_white,
        color_cyan,
        color_yellow,
        color_magenta,// there can be a comma after the last enumerator, but there doesn't have to be a comma
    };// however the enum itself must end with a semicolon

    // Define a few variables of enumerated type Color
    Color paint = color_white;
    Color house(color_blue);
    Color apple{ color_red };


    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Naming enumerations and enumerators" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Enumerator scope" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Enumerator values" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Each enumerator is automatically assigned an integer value based on its position in 
    the enumeration list. By default, the first enumerator is assigned the integer value 0, 
    and each subsequent enumerator has a value one greater than the previous enumerator:
    */
    enum Fruit
    {
        fruit_banana,// assigned 0
        fruit_apple,// assigned 1
        fruit_watermelon,// assigned 2
        fruit_strasberry,// assigned 3
        //...
    };

    Fruit today{ fruit_strasberry };
    std::cout << today << '\n'; // print 3

    // define a new enum named Animal
    enum Animal
    {
        animal_cat = -3,
        animal_dog,// assigned -2
        animal_pig,// assigned -1
        animal_horse = 5,
        animal_giraffe = 5,// shares same value as animal_horse
        animal_chicken// assigned 6
    };
    
    Animal mypoppy{ animal_dog };

    std::cout << Animal::animal_horse << '\n';
    std::cout << mypoppy << '\n';

    /*
    Best practice

    Don’t assign specific values to your enumerators.

    Don’t assign the same value to two enumerators in the same 
    enumeration unless there’s a very good reason.
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Enum type evaluation and input/output" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Printing enumerators" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    printDay(Days::day_wednesday);

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Enum allocation and forward declaration" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Enum types are considered part of the integer family of types, and it’s up to the 
    compiler to determine 
    how much memory to allocate for an enum variable. The C++ standard says the enum size needs to 
    be large enough to represent all of the enumerator values. Most often, it will make enum variables 
    the same size as a standard int.

    Because the compiler needs to know how much memory to allocate for an enumeration, you can only 
    forward declare them when you also specify a fixed base. Because defining an enumeration does 
    not allocate any memory, if an enumeration is needed in multiple files, it is fine to define 
    the enumeration in a header, and #include that header wherever needed.
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "What are enumerators useful for?" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Quiz time" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Question #1

    Define an enumerated type to choose between the following monster races: orcs, goblins, 
    trolls, ogres, and skeletons.

    go see headersfile.h
    */

    /*
    Question #2

    Define a variable of the enumerated type you defined in question 1 and initialize it 
    with the troll enumerator.
    */
    auto monsters{ Monster_races::monster_troll };
    // The type is obvious, we can use auto.
    // We're using the MonsterType:: prefix for consistency with the next lesson.

    /*
    Question #3

    True or false. Enumerators can be:
    3a) given an integer value
    3b) not assigned a value
    3c) given a floating point value
    3d) negative
    3e) non-unique
    3f) initialized with the value of prior enumerators (e.g. color_magenta = color_red)
    */
    



    return 0;
}