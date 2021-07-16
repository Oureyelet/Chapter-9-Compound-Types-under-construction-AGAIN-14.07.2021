#include <iostream>

int main()
{
    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Aggregate data type" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    One of the simplest aggregate data types is the struct. A struct (short for structure) 
    allows us to group variables of mixed data types together into a single unit.
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Declaring and defining structs" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Because structs are user-defined, we first have to tell the compiler what our struct looks 
    like before we can begin using it. To do this, we declare our struct using the struct keyword. 
    Here is an example of a struct declaration:
    */
    struct Employee
    {
        int id{};
        int age{};
        double wage{};
    };

    //In order to use the Employee struct, we simply declare a variable of type Employee:

    Employee joe{};// struct Employee is capitalized, variable joe is not

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Accessing struct members" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Here is an example of using the member selection operator to initialize each member variable:
    */
    Employee ania{};// create an Employee struct for ania
    ania.id = 7;// assign a value to member id within struct ania
    ania.age = 30;// assign a value to member age within struct ania
    ania.wage = 37.45;// assign a value to member wage within struct ania

    Employee mati{};// create an Employee struct for mati
    mati.id = 5;// assign a value to member id within struct mati
    mati.age = 28;// assign a value to member age within struct mati
    mati.wage = 27.45;// assign a value to member wage within struct mati

    /*
    As with normal variables, struct member variables are not initialized, and will 
    typically contain junk. We must initialize them manually.
    
    Struct member variables act just like normal variables, so it is possible 
    to do normal operations on them:
    */

    int totalAge{ ania.age + mati.age };

    if(ania.wage > mati.wage)
        std::cout << "Ania makes more than Mati\n";
    else if(ania.wage < mati.wage)
        std::cout << "Ania makes less than Mati\n";
    else
        std::cout << "Joe and Frank make the same amount\n";

    // Ania got a promotion
    ania.wage += 23.45;

    // Today is Mati's birthday
    ++mati.age;// use pre-increment to increment Mati's age by 1


    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Initializing structs" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    


    return 0;
}