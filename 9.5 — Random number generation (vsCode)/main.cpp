#include <iostream>
#include <cstdlib>//for std::rand() and std::srand()
#include <ctime> // for std::time()
#include <random>// for std::mt19937

unsigned int PRNG()
{
    // our initial starting seed is 5323
    static unsigned int seed{ 5323 };

    // Take the current seed and generate a new value from it
    // Due to our use of large constants and overflow, it would be
    // hard for someone to casually predict what the next number is
    // going to be from the previous one.
    seed = 8253729 * seed + 2396403;

    // Take the seed and return a value between 0 and 32767
    return seed % 32768;
}

// Generate a random number between min and max (inclusive)
// Assumes std::srand() has already been called
// Assumes max - min <= RAND_MAX
int getRandomNumber(int min, int max)
{
    static constexpr double fraction { 1.0 / (RAND_MAX + 1.0) };  // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

int main()
{
    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "pseudo-random number generator (PRNG)" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    It’s actually fairly easy to write a PRNG. Here’s a short program that generates 
    100 pseudo-random numbers:
    */

    for(int count{ 1 }; count <= 100; ++count)
    {
        //std::cout << PRNG() << '\t';
    
        if(count % 5 == 0)
            std::cout << '\n';
    }

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Generating random numbers in C++" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    C (and by extension C++) comes with a built-in pseudo-random number generator. It is implemented 
    as two separate functions that live in the cstdlib header:

    std::srand() sets the initial seed value to a value that is passed in by the caller. std::srand() 
    should only be called once at the beginning of your program. This is usually done at the 
    top of main().

    std::rand() generates the next random number in the sequence. That number will be a 
    pseudo-random integer between 0 and RAND_MAX, a constant in cstdlib that is typically set to 32767.

    Here’s a sample program using these functions:
    */

    std::srand(5323);// set initial seed value to 5323
    // Due to a flaw in some compilers, we need to call std::rand() once
    // here to get "better" random numbers.
    std::rand();

    for (int count{ 1 }; count <= 100; ++count)
    {
        //std::cout << std::rand() << '\t';
 
        // If we've printed 5 numbers, start a new row
        if (count % 5 == 0)
            std::cout << '\n';
	}

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "PRNG sequences and seeding" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    //Here’s the same program as above, using a call to time() as the seed:
    
    std::srand(static_cast<unsigned int>(std::time(nullptr)));// set initial seed value to system clock

    for (int count{ 1 }; count <= 100; ++count)
    {
        //std::cout << std::rand() << '\t';
 
        // If we've printed 5 numbers, start a new row
        if (count % 5 == 0)
            std::cout << '\n';
	}

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Generating random numbers between two arbitrary values" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    //Here’s a short function that converts the result of rand() into the range we want:

    for (int count{ 1 }; count <= 10; ++count)
    {
        //std::cout << getRandomNumber(1, 9) << ' ';
	}
        std::cout << '\n';

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "What is a good PRNG?" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////


    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "std::rand() is a mediocre PRNG" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////


    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Better random numbers using Mersenne Twister" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    C++11 added a ton of random number generation functionality to the C++ standard library, 
    including the Mersenne Twister algorithm, as well as generators for different kinds of 
    random distributions (uniform, normal, Poisson, etc…). This is accessed via the <random> header.

    Here’s a short example showing how to generate random numbers in C++11 using 
    Mersenne Twister (h/t to user Fernando):
    */

    // Initialize our mersenne twister with a random seed based on the clock
    std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };

    // Create a reusable random number generator that generates uniform numbers between 1 and 6
	std::uniform_int_distribution<> die{ 1, 6 };
	// If your compiler doesn't support C++17, use this instead
	// std::uniform_int_distribution<> die{ 1, 6 };

    // Print a bunch of random numbers
	for (int count{ 1 }; count <= 48; ++count)
	{
		std::cout << die(mersenne) << '\t'; // generate a roll of the die here
 
		// If we've printed 6 numbers, start a new row
		if (count % 6 == 0)
			std::cout << '\n';
	}

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Random numbers across multiple functions" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////



    return 0;
}