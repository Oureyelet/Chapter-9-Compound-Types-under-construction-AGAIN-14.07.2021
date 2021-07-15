#include <iostream>

enum Days : int;
void printDay(Days single);


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
    //printDay();


    return 0;
}


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