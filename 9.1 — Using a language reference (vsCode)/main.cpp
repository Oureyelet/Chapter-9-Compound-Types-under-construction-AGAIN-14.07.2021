#include <iostream>
#include <string>

int getUserImput()
{
    int i{ 0 };
    std::cin >> i;
    return i;
}

int main()
{
    std::cout << "How many bananas did you eat today? \n";

    if(int iBananasEaten{ getUserImput() }; iBananasEaten <= 2 )
    {
        std::cout << "Yummy\n";
    }
    else
    {
        std::cout << iBananasEaten << " is a lot!\n";
    }

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Introduction to cppreference.com" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    std::string str{ "I saw a red car yesterday." };

    str.replace(8, 3, "blue"); // start from 8th places and remow 3 first leter and replacment with 'blue'

    std::cout << str << '\n';    

    return 0;
}