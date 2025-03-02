#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

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

void timePlusFifteen()
{
    int hours;
    int minutes;
    std::cin >> hours >> minutes;

    int hoursInMinutes = hours * 60 + minutes;
    int minutesPlus = hoursInMinutes + 15;

    int finalHour = minutesPlus / 60;
    int finalMinutes = minutesPlus % 60;

    if (finalHour >= 24)
    {
        finalHour -= 24;
    }

    if (finalMinutes < 10)
    {
        std::cout << finalHour << ":0" << finalMinutes << std::endl;
    }
    else
    {
        std::cout << finalHour << ":" << finalMinutes << std::endl;
    }
}

void toyShop()
{
    const double puzzlePrice = 2.60;
    const double dollPrice = 3;
    const double bearPrice = 4.10;
    const double minionPrice = 8.20;
    const double truckPrice = 2;

    double vacationPrice;
    int numberP, numberD, numberB, numberM, numberT;
    std::cin >> vacationPrice >> numberP >> numberD >> numberB >> numberM >> numberT;

    double finalP = numberP * puzzlePrice;
    double finalD = numberD * dollPrice;
    double finalB = numberB * bearPrice;
    double finalM = numberM * minionPrice;
    double finalT = numberT * truckPrice;

    double finalPrice = finalP + finalD + finalB + finalM + finalT;
    int quantityToys = numberP + numberD + numberB + numberM + numberT;

    if (quantityToys >= 50)
    {
        double discount = finalPrice * 0.25;
        finalPrice -= discount;
    }

    double afterRent = finalPrice * 0.9;

    if (afterRent >= vacationPrice)
    {
        std::cout << "Yes! " << std::fixed << std::setprecision(2) << afterRent - vacationPrice << " lv left." << std::endl;
    }
    else
    {
        std::cout << "Not enough money! " << std::fixed << std::setprecision(2) << vacationPrice - afterRent << " lv needed." << std::endl;
    }
}

void godzillaVSKong()
{
    double budget;
    int numberOfWorkers;
    double pricePerCostume;
    std::cin >> budget >> numberOfWorkers >> pricePerCostume;

    double decor = budget * 0.1; 
    double costumePrice = pricePerCostume * numberOfWorkers;
    
    if (numberOfWorkers >= 150)
    {
        double discount = costumePrice * 0.1; 
        costumePrice -= discount;
    }

    double final = decor + costumePrice;

    if (final > budget)
    {
        std::cout << "Not enough money!\n" << "Wingard needs " << std::fixed << std::setprecision(2) << final - budget << " leva more."; // Correct
    }
    else
    {
        std::cout << "Action!\n" << "Wingard starts filming with "<< std::fixed << std::setprecision(2) << budget - final << " leva left."; // Correct
    }
}

void swimmingRecord()
{
    double recordInSeconds, distanceInMeters, timeInSeconds;
    std::cin >> recordInSeconds >> distanceInMeters >> timeInSeconds; 

    double hasToSwim = distanceInMeters * timeInSeconds;

    double slowDown = floor(distanceInMeters / 15.0) * 12.5;

    double sumTime = hasToSwim + slowDown; 

    if (sumTime >= recordInSeconds)
    {
        std::cout << "No, he failed! He was " << std::fixed << std::setprecision(2) << sumTime - recordInSeconds << " seconds slower.";
    }
    else
    {
        std::cout << "Yes, he succeeded! The new world record is " << std::fixed << std::setprecision(2) << sumTime << " seconds.";
    }
}

void shopping()
{
    double budget;
    int quantityN, quantityM, quantityP;
    std::cin >> budget >> quantityN >> quantityM >> quantityP;

    const double priceN = 250;
    double totalN = priceN * quantityN;

    double priceM = totalN * 0.35;
    double totalM = priceM * quantityM;

    double priceP = totalN * 0.1;
    double totalP = priceP * quantityP;

    double total = totalN + totalM + totalP;

    
    if (quantityN > quantityM)
    {
        double discount = total * 0.15;
        total -= discount;
    }

    if (budget >= total)
    {
        std::cout << "You have " << std::fixed << std::setprecision(2) << budget - total << " leva left!" << std::endl;
    }
    else
    {
        std::cout << "Not enough money! You need " << std::fixed << std::setprecision(2) << total - budget << " leva more!" << std::endl;
    }
}

void lunchBreak()
{
    int length, breakLength;
    std::string movie;

    getline(std::cin, movie);
    

    std::cin >> length >> breakLength;

    double lunch = breakLength / 8.0;

    double relax = breakLength / 4.0;

    double restOfTime = breakLength - lunch - relax;

    std::cout << std::fixed << std::setprecision(0);
    
    if (restOfTime >= length)
    {
        std::cout << "You have enough time to watch " << movie << " and left with " << ceil(restOfTime - length) << " minutes free time." << std::endl;
    }
    else
    {
        std::cout << "You don't have enough time to watch " << movie << ", you need " << ceil(length - restOfTime) << " more minutes." << std::endl;
    }
}

int main()
{
    

    return 0;
}