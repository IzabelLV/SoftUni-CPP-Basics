#include <iostream>
#include <math.h>
#include <iomanip>

void excellentResult()
{
    double grade;
    std::cin >> grade;

    if (grade >= 5.50)
    {
        std::cout << "Excellent!" << std::endl;
    }
}

void greaterNumber()
{
    int a, b;
    std::cin >> a >> b;

    if (a > b)
    {
        std::cout << a << std::endl;
    }
    else if (b > a)
    {
        std::cout << b << std::endl;
    }
    else
    {
        std::cout << a << std::endl;
    }

    //std::cout << ((a > b) ? a : b);
}

void evenOrOdd()
{
    int digit;
    std::cin >> digit;

    if (digit % 2 == 0)
    {
        std::cout << "even" << std::endl;
    }
    else
    {
        std::cout << "odd" << std::endl;
    }

    //std::cout << ((digit % 2 == 0) ? "even" : "odd");
}

void passwordGuess()
{
    const std::string password = "s3cr3t!P@ssw0rd";

    std::string guessPassword;
    std::cin >> guessPassword;

    if (guessPassword != password)
    {
        std::cout << "Wrong password!" << std::endl;
    }
    else
    {
        std::cout << "Welcome" << std::endl;
    }

    //std::cout << ((guessPassword != password) ? "Wrong password!" : "Welcome");
}

void numberHundredTwoHundred()
{
    int digit;
    std::cin >> digit;

    if (digit < 100)
    {
        std::cout << "Less than 100" << std::endl;
    }
    else if (digit >= 100 && digit <= 200)
    {
        std::cout << "Between 100 and 200" << std::endl;
    }
    else
    {
        std::cout << "Greater than 200" << std::endl;
    }

    //std::cout << ((digit < 100) ? "Less than 100" : (digit >= 100 && digit <= 200) ? "Between 100 and 200" : "Greater than 200");
}

void speedInfo()
{
    double speed;
    std::cin >> speed;

    if (speed <= 10)
    {
        std::cout << "slow" << std::endl;
    }
    else if (speed > 10 && speed <= 50)
    {
        std::cout << "average" << std::endl;
    }
    else if (speed > 50 && speed <= 150)
    {
        std::cout << "fast" << std::endl;
    }
    else if (speed > 150 && speed <= 1000)
    {
        std::cout << "ultra fast" << std::endl;
    }
    else
    {
        std::cout << "extremely fast" << std::endl;
    }

    //std::cout << ((speed <= 10) ? "slow" : (speed > 10 && speed <= 50) ? "average" : (speed > 50 && speed <= 150) ? "fast" : (speed > 150 && speed <= 1000) ? "ultra fast" : "Extremely fast");
}

void areaOfFigures()
{
    const double pi = 3.14159;
    std::string geometricFigure;
    std::cin >> geometricFigure;

    if (geometricFigure == "square")
    {
        double sideLength;
        std::cin >> sideLength;
        std::cout << std::fixed << std::setprecision(3) << (sideLength * sideLength) << std::endl;
    }
    else if (geometricFigure == "rectangle")
    {
        double firstSideLength, secondSideLength;
        std::cin >> firstSideLength >> secondSideLength;
        std::cout << std::fixed << std::setprecision(3) << (firstSideLength * secondSideLength) << std::endl;
    }
    else if (geometricFigure == "circle")
    {
        double radius;
        std::cin >> radius;
        std::cout << std::fixed << std::setprecision(3) << (pi * pow(radius, 2)) << std::endl;
    }
    else if (geometricFigure == "triangle")
    {
        double sideLength, heightLength;
        std::cin >> sideLength >> heightLength;
        std::cout << std::fixed << std::setprecision(3) << (0.5 * sideLength * heightLength) << std::endl; 
    }
}