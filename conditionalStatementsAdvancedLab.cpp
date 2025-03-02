#include <iostream>
#include <iomanip>


void dayOfWeek()
{
    int day;
    std::cin >> day;

    switch(day)
    {
        case 1:
        std::cout << "Monday\n";
        break;

        case 2:
        std::cout << "Tuesday\n";
        break;

        case 3:
        std::cout << "Wednesday\n";
        break;

        case 4:
        std::cout << "Thursday\n";
        break;

        case 5:
        std::cout << "Friday\n";
        break;

        case 6:
        std::cout << "Saturday\n";
        break;

        case 7:
        std::cout << "Sunday\n";
        break;

        default:
        std::cout << "Error\n";
    }
}

void weekendOrWorkingDay()
{
    std::string day;
    std::cin >> day;

    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        std::cout << "Working day\n";
    }
    else if (day == "Saturday" || day == "Sunday")
    {
        std::cout << "Weekend\n";
    }
    else
    {
        std::cout << "Error\n";
    }
}

void animalType()
{
    std::string animal;
    std::cin >> animal;

    if (animal == "dog")
    {
        std::cout << "mammal\n";
    }
    else if (animal == "crocodile" || animal == "tortoise" || animal == "snake")
    {
        std::cout << "reptile\n";
    }
    else
    {
        std::cout << "unknown\n";
    }
}

void personalTitles()
{
    double age;
    char gender;
    std::cin >> age >> gender;

    if (gender == 'm')
    {
        if (age >= 16)
        {
            std::cout << "Mr.\n";
        }
        else
        {
            std::cout << "Master\n";
        }
    }
    else if (gender == 'f')
    {
        if (age >= 16)
        {
            std::cout << "Ms.\n";
        }
        else
        {
            std::cout << "Miss\n";
        }
    }
}

void smallShop()
{
    std::string product, city;
    double quantity;
    std::cin >> product >> city >> quantity;
    double price = 0.0;
    if (city == "Sofia")
    {
        if (product == "coffee")
        {
            price = 0.50;
        }
        else if (product == "water")
        {
            price = 0.80;
        }
        else if (product == "beer")
        {
            price = 1.20;
        }
        else if (product == "sweets")
        {
            price = 1.45;
        }
        else if (product == "peanuts")
        {
            price = 1.60;
        }
    }
    else if (city == "Plovdiv")
    {
        if (product == "coffee")
        {
            price = 0.40;
        }
        else if (product == "water")
        {
            price = 0.70;
        }
        else if (product == "beer")
        {
            price = 1.15;
        }
        else if (product == "sweets")
        {
            price = 1.30;
        }
        else if (product == "peanuts")
        {
            price = 1.50;
        }
    }
    else if (city == "Varna")
    {
        if (product == "coffee")
        {
            price = 0.45;
        }
        else if (product == "water")
        {
            price = 0.70;
        }
        else if (product == "beer")
        {
            price = 1.10;
        }
        else if (product == "sweets")
        {
            price = 1.35;
        }
        else if (product == "peanuts")
        {
            price = 1.55;
        }
    }

    std::cout << price * quantity << std::endl;

}

void numberInRange()
{
    int digit;
    std::cin >> digit;

    if (digit >= -100 && digit <= 100 && digit != 0)
    {
       std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
    }
}

void workingHours()
{
    int time;
    std::string day;
    std::cin >> time >> day;

    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" || day == "Saturday")
    {
        if (time >= 10 && time < 18)
        {
            std::cout << "open\n";
        }
        else
        {
            std::cout << "closed\n";
        }
    }
    else
    {
        std::cout << "closed\n";
    }
}

void cinemaTicket() 
{
    std::string day;
    std::cin >> day;

    if (day == "Monday" || day == "Tuesday" || day == "Friday")
    {
        std::cout << 12 << '\n';
    }
    else if (day == "Wednesday" || day == "Thursday")
    {
        std::cout << 14 << '\n';
    }
    else
    {
        std::cout << 16 << '\n';
    }
}

void fruitOrVegetable()
{
    std::string productName;
    std::cin >> productName;

    if (productName == "banana" || productName == "apple" || productName == "kiwi" || productName == "cherry" || productName == "lemon" || productName == "grapes")
    {
        std::cout << "fruit\n";
    }
    else if (productName == "tomato" || productName == "cucumber" || productName == "pepper" || productName == "carrot")
    {
        std::cout << "vegetable\n";
    }
    else
    {
        std::cout << "unknown\n";
    }
}

void invalidNumber()
{
    int digit;
    std::cin >> digit;

    if (digit >= 100 && digit <= 200 || digit == 0)
    {
        std::cout << '\0';
    }
    else
    {
        std::cout << "invalid\n";
    }
}

void fruitShop()
{
    std::string product, day;
    double quantity;
    std::cin >> product >> day >> quantity;

    double price = 0.0;
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if (product == "banana")
        {
            price = 2.50;
        }
        else if (product == "apple")
        {
            price = 1.20;
        }
        else if (product == "orange")
        {
            price = 0.85;
        }
        else if (product == "grapefruit")
        {
            price = 1.45;
        }
        else if (product == "kiwi")
        {
            price = 2.70;
        }
        else if (product == "pineapple")
        {
            price = 5.50;
        }
        else if (product == "grapes")
        {
            price = 3.85;
        }
    }
    else if (day == "Saturday" || day == "Sunday")
    {
        if (product == "banana")
        {
            price = 2.70;
        }
        else if (product == "apple")
        {
            price = 1.25;
        }
        else if (product == "orange")
        {
            price = 0.90;
        }
        else if (product == "grapefruit")
        {
            price = 1.60;
        }
        else if (product == "kiwi")
        {
            price = 3.00;
        }
        else if (product == "pineapple")
        {
            price = 5.60;
        }
        else if (product == "grapes")
        {
            price = 4.20;
        }
    }

    if (price > 0)
    {
        std::cout << std::fixed << std::setprecision(2) << quantity * price << std::endl;
    }
    else
    {
        std::cout << "error\n";
    }
}

void tradeCommissions()
{
    std::string city;
    double sells;
    std::cin >> city >> sells;

    double commission = 0;
    if (city == "Sofia")
    {
        if (sells >= 0 && sells <= 500)
        {
            commission = 0.05;
        }
        else if (sells > 500 && sells <= 1000)
        {
            commission = 0.07;
        }
        else if (sells > 1000 && sells <= 10000)
        {
            commission = 0.08;
        }
        else if (sells > 10000)
        {
            commission = 0.12;
        }
    }
    else if (city == "Varna")
    {
        if (sells >= 0 && sells <= 500)
        {
            commission = 0.045;
        }
        else if (sells > 500 && sells <= 1000)
        {
            commission = 0.075;
        }
        else if (sells > 1000 && sells <= 10000)
        {
            commission = 0.1;
        }
        else if (sells > 10000)
        {
            commission = 0.13;
        }
    }
    else if (city == "Plovdiv")
    {
        if (sells >= 0 && sells <= 500)
        {
            commission = 0.055;
        }
        else if (sells > 500 && sells <= 1000)
        {
            commission = 0.08;
        }
        else if (sells > 1000 && sells <= 10000)
        {
            commission = 0.12;
        }
        else if (sells > 10000)
        {
            commission = 0.145;
        }
    }

    if (commission != 0)
    {
        std::cout << std::fixed << std::setprecision(2) << sells * commission << std::endl;
    }
    else
    {
        std::cout << "error\n";
    }
}