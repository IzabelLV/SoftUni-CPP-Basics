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

void bonusScore()
{
    int digit;
    std::cin >> digit;
    
    double score = 0.0;

    if (digit <= 100)
    {
        score = 5;
    }
    else if (digit <= 1000)
    {
        score = 0.2 * digit;
    }
    else
    {
        score += 0.1 * digit;
    }

    if (digit % 2 == 0)
    {
        score += 1;
    }
    else if (digit % 10 == 5)
    {
        score += 2;
    }

    std::cout << score << '\n' << digit + score << std::endl;
}


int main()
{
    
    
    return 0;
}