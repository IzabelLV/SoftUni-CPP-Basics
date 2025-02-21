#include <iostream>
#include <math.h>


void usdToBgn()
{
    double usd;
    std::cin >> usd;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    std::cout << (usd * 1.79549) << std::endl; 
}

void radiansToDegrees()
{
    const double pi = 3.14;
    double radian;

    std::cin >> radian;

    std::cout << round(radian * 180 / pi) << std::endl;
}

void depositCalculator()
{
    double depositedAmount;
    int depositPeriod;
    double yearlyInterest;
    std::cin >> depositedAmount >> depositPeriod >> yearlyInterest; // 200 3 5.7

    double interest = (yearlyInterest / 100) * depositedAmount;
    double monthlyInterest = interest / 12;

    std::cout << depositedAmount + depositPeriod * monthlyInterest << std::endl;
}

void schoolSupplies()
{
    const double packetOfPensPrice = 5.80;
    const double packetOfMarkersPrice = 7.20;
    const double cleaningLiquidPrice = 1.20; //Per litre

    int penPacketQuantity, markerPacketQuantity, cleaningLiquidLitres, percentageDiscount;
    std::cin >> penPacketQuantity >> markerPacketQuantity >> cleaningLiquidLitres >> percentageDiscount;

    double fullPricePens = penPacketQuantity * packetOfPensPrice;
    double fullPriceMarkers = markerPacketQuantity * packetOfMarkersPrice;
    double fullPriceCleaningLiquid = cleaningLiquidLitres * cleaningLiquidPrice;
    double totalPrice = fullPricePens + fullPriceMarkers + fullPriceCleaningLiquid;
    double discount = static_cast<double>(percentageDiscount) / 100.0;

    std::cout <<  totalPrice - (totalPrice * discount) << std::endl;
}

void repainting()
{
    const double nylonPrice = 1.50;
    const double paintPrice = 14.50;
    const int thinnerPrice = 5;

    int neededNylon, neededPaint, neededThinner, workingHours;
    std::cin >> neededNylon >> neededPaint >> neededThinner >> workingHours;

    double fullPriceNylon = nylonPrice * (static_cast<double>(neededNylon) + 2.0);
    double addtionPaint = static_cast<double>(neededPaint) * 0.1;
    double fullPricePaint = paintPrice * (neededPaint + addtionPaint);
    double fullPriceThinner = thinnerPrice * neededThinner;

    double fullPrice = fullPriceNylon + fullPricePaint + fullPriceThinner + 0.40;
    double salaryForWorkers = (fullPrice * 0.3) * workingHours;

    std::cout << fullPrice + salaryForWorkers << std::endl;
}

void foodDelivery()
{
    const double chickenMenuPrice = 10.35;
    const double fishMenuPrice = 12.40;
    const double vegeterianMenuPrice = 8.15;
    const double deliveryPrice = 2.50;

    int chickenMenuQuantity, fishMenuQuantity, vegeterianMenuQuantity;
    std::cin >> chickenMenuQuantity >> fishMenuQuantity >> vegeterianMenuQuantity;

    double fullPriceChicken = chickenMenuPrice * chickenMenuQuantity;
    double fullPriceFish = fishMenuPrice * fishMenuQuantity;
    double fullPriceVeg = vegeterianMenuPrice * vegeterianMenuQuantity;

    double fullPrice = fullPriceChicken + fullPriceFish + fullPriceVeg;
    double dessert = fullPrice * 0.2;
    std::cout << fullPrice +  dessert + deliveryPrice << std::endl;
}

void basketballEquipment()
{
    int yearlyTax;
    std::cin >> yearlyTax;

    double basketballShoes = yearlyTax - (static_cast<double>(yearlyTax) * 0.4);
    double basketballSet = basketballShoes - (basketballShoes * 0.2);
    double basketballBall = basketballSet / 4.0;
    double basketballAcc = basketballBall / 5.0;

    std::cout << yearlyTax + basketballShoes + basketballSet + basketballBall + basketballAcc << std::endl;
}

void aquarium()
{
    int length, width, height;
    double percentage;
    std::cin >> length >> width >> height >> percentage;

    int volume = length * width * height;
    double volumeLiters = static_cast<double>(volume) / 1000.0;
    double percentageTaken = percentage / 100.0;
    double neededLiters = volumeLiters * (1.0 - percentageTaken);
    
    std::cout << neededLiters << std::endl;
}