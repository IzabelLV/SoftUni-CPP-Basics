#include <iostream>

void sumSeconds()
{
    int first, second, third;
    std::cin >> first >> second >> third;

    int sum = first + second + third;
    int minutes = sum / 60;
    int seconds = sum % 60;

    if (seconds < 10)
    {
        std::cout << minutes << ":0" << seconds << std::endl;
    }
    else
    {
        std::cout << minutes << ":" << seconds << std::endl;
    }

    //std::cout << minutes << ':' << (seconds < 10 ? "0" : "") << seconds;
}


int main()
{
    int digit;
    std::cin >> digit;
    
    double score = 0.0;

    if (digit <= 100)
    {
        score = 5;
    }
    else if (digit > 100)
    {
        score = 0.1 * digit;
    }
    else if (digit > 1000)
    {
        score = 0.2 * digit;
    }

    if (digit % 2 == 0)
    {
        score = 1;
    }

    if (digit % 10 == 5)
    {
        score = 2;
    }

    std::cout << score << '\n' << (static_cast<double>(digit) + score) << std::endl;

    
    return 0;
}