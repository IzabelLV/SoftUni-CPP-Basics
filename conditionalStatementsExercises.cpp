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
    
    
    return 0;
}