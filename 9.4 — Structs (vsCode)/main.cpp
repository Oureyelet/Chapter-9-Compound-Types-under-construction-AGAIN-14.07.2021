#include <iostream>
#include <string>
#include <cstdint> // for sizeof()

struct Employee2
{
    int id{};
    int age{};
    double wage{};
};

void print_informations(Employee2 employee)
{
    std::cout << "ID: " << employee.id << '\n';
    std::cout << "AGA: " << employee.age << '\n';
    std::cout << "WAGE: " << employee.wage << '\n';
}

struct Advert
{
   int how_many_ads{};
   double percentage_clicked{};
   double how_much_I_earned{};
};

double ads(Advert advert)
{
    return advert.how_many_ads * advert.percentage_clicked * advert.how_much_I_earned;
}

struct Fraction
{
    int numerator{};
    int denominator{};
};

double multiply(Fraction myfraction)
{
    int x{ myfraction.denominator * myfraction.numerator };

    return static_cast<double>(x);
}

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
    /*
    Initializing structs by assigning values member by member is a little cumbersome, 
    so C++ supports a faster way to initialize structs using an initializer list. 
    This allows you to initialize some or all the members of a struct at declaration time.
    */

    struct Tibia
    {
        int lvl{};
        int skill{};
        std::string profesion{};
    };

    Tibia morit{77, 32, "Knight"};// morit.lvl = 77, morit.skill = 32, morit.profesion = "Knight"
    Tibia xaere{120, 45, "Knight"};// ...


    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Assigning to structs" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Structs and functions" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////   

    Employee2 tobiasz{35, 18, 130.65};

    // Print tobiasz's information
    print_informations(tobiasz);


    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Nested structs" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    //Structs can contain other structs. For example:

    struct Employee3
    {
        int id{};
        int age{};
        double wage{};
    };

    struct Company
    {
        Employee3 CEO{};// Employee3 is a struct within the Company struct
        int number_of_employees{};
    };

    Company myCompany;

    /*
    In this case, if we wanted to know what the CEO’s salary was, we simply use the 
    member selection operator twice: myCompany.CEO.wage;
    */
    myCompany.CEO.wage = 134.67;


    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Struct size and data structure alignment" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    std::cout << "The size of double is " << sizeof(double) << '\n';
    std::cout << "The size of Employee is " << sizeof(Employee3) << '\n';


    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Accessing structs across multiple files" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Because struct declarations do not take any memory, if you want to share a struct declaration 
    across multiple files (so you can instantiate variables of that struct type in multiple files), 
    put the struct declaration in a header file, and #include that header file anywhere you need it.
    */


    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Quiz time" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Question #1

    You are running a website, and you are trying to keep track of how much money you make per day 
    from advertising. Declare an advertising struct that keeps track of how many ads you’ve shown 
    to readers, what percentage of ads were clicked on by users, and how much you earned on average 
    from each ad that was clicked. Read in values for each of these fields from the user. Pass the 
    advertising struct to a function that prints each of the values, and then calculates how much 
    you made for that day (multiply all 3 fields together).
    */

    Advert myADS{};

    myADS.how_many_ads;
    myADS.percentage_clicked;
    myADS.how_much_I_earned;

    std::cout << "How many ads you’ve shown to readers: ";
    std::cin >> myADS.how_many_ads;

    std::cout << "What percentage of ads were clicked on by users: ";
    std::cin >> myADS.percentage_clicked;

    std::cout << "How much you earned on average from each ad: ";
    std::cin >> myADS.how_much_I_earned;

    std::cout << ads(myADS) << '\n';


    /*
    Question #2

    Create a struct to hold a fraction. The struct should have an integer numerator and an integer 
    denominator member. Declare 2 fraction variables and read them in from the user. 
    Write a function called multiply that takes both fractions, multiplies them together, and returns 
    the result as a decimal number. You do not need to reduce the fraction to its lowest terms. 
    Print the result of the multiplication of the 2 fraction variables.
    */

    Fraction variables1{};

    variables1.denominator;
    variables1.numerator;

    std::cout << "Value of first Fraction1: ";
    std::cin >> variables1.denominator;
    std::cout << "Value of second Fraction1: ";
    std::cin >> variables1.numerator;



    std::cout << multiply(variables1) << '\n';






    return 0;
}