#include <iostream>
#include <iomanip>


void cinema()
{
    const int premierePrice = 12;
    const double normalPrice = 7.50;
    const int discount = 5;
    
    std::string type;
    int r, c;
    std::cin >> type >> r >> c;
    
    double fullRoom = r * c;
    
    if (type == "Premiere")
    {
        fullRoom *= premierePrice;
    }
    else if (type == "Normal")
    {
        fullRoom *= normalPrice;
    }
    else if (type == "Discount")
    {
        fullRoom *= discount;
    }
    
    std::cout << std::fixed << std::setprecision(2) << fullRoom << " leva\n";
}

void summerOutfit()
{
    int celsius;
    std::string typeOfDay;
    std::cin >> celsius >> typeOfDay;
    
    
    std::string outfit, shoes;
    if (typeOfDay == "Morning")
    {
        if (celsius >= 10 && celsius <= 18)
        {
        outfit = "Sweatshirt";
        shoes = "Sneakers";
        }
        else if (celsius > 18 && celsius <= 24)
        {
        outfit = "Shirt";
        shoes = "Moccasins";
        }
        else
        {
        outfit = "T-Shirt";
        shoes = "Sandals";
        }
    }
    else if (typeOfDay == "Afternoon")
    {
        if (celsius >= 10 && celsius <= 18)
        {
        outfit = "Shirt";
        shoes = "Moccasins";
        }
        else if (celsius > 18 && celsius <= 24)
        {
        outfit = "T-Shirt";
        shoes = "Sandals";
        }
        else
        {
        outfit = "Swim Suit";
        shoes = "Barefoot";
        }
    }
    else if (typeOfDay == "Evening")
    {
        outfit = "Shirt";
        shoes = "Moccasins";
    }
    
    std::cout << "It's " << celsius << " degrees, get your " << outfit << " and " << shoes << ".\n";
}

void newHouse()
{
    const int rosesPrice = 5;
    const double daliaPrice = 3.80;
    const double lalePrice = 2.80;
    const int narcisPrice = 3;
    const double gladiolaPrice = 2.50;
    
    std::string type;
    int budget, quantity;
    std::cin >> type >> quantity >> budget;
    double discount = 0.0;
    
    
    double price = 0.0;
    if (type == "Roses")
    {
        price = rosesPrice * quantity;
        if (quantity > 80)
        {
            discount = price * 0.1;
            price -= discount;
        }
    }
    else if (type == "Dahlias")
    {
        price = daliaPrice * quantity;
        if (quantity > 90)
        {
            discount = price * 0.15;
            price -= discount;
        }
    }
    else if (type == "Tulips")
    {
        price = lalePrice * quantity;
        if (quantity > 80)
        {
            discount = price * 0.15;
            price -= discount;
        }
    }
    else if (type == "Narcissus")
    {
        price = narcisPrice * quantity;
        if (quantity < 120)
        {
            discount = price * 0.15;
            price += discount;
        }
    }
    else if (type == "Gladiolus")
    {
        price = gladiolaPrice * quantity;
        if (quantity < 80)
        {
            discount = price * 0.2;
            price += discount;
        }
    }
    
    if (budget >= price)
    {
        std::cout << "Hey, you have a great garden with " << quantity << ' ' << type << " and " << std::fixed << std::setprecision(2) << (budget - price) << " leva left.\n";
    }
    else
    {
        std::cout << "Not enough money, you need " << std::fixed << std::setprecision(2) << (price- budget) << " leva more.\n";
    }
}

void fishingBoat()
{
    int springRent = 3000;
    int summerAutumnRent = 4200;
    int winterRent = 2600;
    
    // <= 6 - 0.1
    // > 7 && <= 11 - 0.15
    // > 12 - 0.25
    
    // if % 2 == 0 - 0.5 if autumn != discount
    
    std::string season;
    int budget, fishers;
    
    std::cin >> budget >> season >> fishers;
    
    double price = 0.0;
    double discount = 0.0;
    
    if (season == "Spring")
    {
        price = springRent;
        if (fishers <= 6)
        {
            discount = price * 0.1;
            price -= discount;
        }
        else if (fishers > 7 && fishers <= 11)
        {
            discount = price * 0.15;
            price -= discount;
        }
        else if (fishers > 12)
        {
            discount = price * 0.25;
            price -= discount;
        }
    }
    else if (season == "Summer")
    {
        price = summerAutumnRent;
        if (fishers <= 6)
        {
            discount = price * 0.1;
            price -= discount;
        }
        else if (fishers > 7 && fishers <= 11)
        {
            discount = price * 0.15;
            price -= discount;
        }
        else if (fishers > 12)
        {
            discount = price * 0.25;
            price -= discount;
        }
    }
    else if (season == "Autumn")
    {
        price = summerAutumnRent;
        if (fishers <= 6)
        {
            discount = price * 0.1;
            price -= discount;
        }
        else if (fishers > 7 && fishers <= 11)
        {
            discount = price * 0.15;
            price -= discount;
        }
        else if (fishers > 12)
        {
            discount = price * 0.25;
            price -= discount;
        }
    }
    else if (season == "Winter")
    {
        price = winterRent;
        if (fishers <= 6)
        {
            discount = price * 0.1;
            price -= discount;
        }
        else if (fishers > 7 && fishers <= 11)
        {
            discount = price * 0.15;
            price -= discount;
        }
        else if (fishers > 12)
        {
            discount = price * 0.25;
            price -= discount;
        }
    }
    
    if (fishers % 2 == 0 && season != "Autumn")
    {
        price = price - 0.05 * price;
    }
    
    if (budget >= price)
    {
        std::cout << "Yes! You have " << std::fixed << std::setprecision(2) << (budget - price) << " leva left.\n";
    }
    else
    {
        std::cout << "Not enough money! You need " << std::fixed << std::setprecision(2) << (price - budget) << " leva.\n";
    }
}

void journey()
{
    double budget;
    std::string season;
    std::cin >> budget >> season;

    double price = 0.0;
    std::string vacation;
    std::string type;
    if (budget <= 100)
    {
        vacation = "Bulgaria";
        if (season == "summer")
        {
            price = budget * 0.7;
            type = "Camp";
        }
        else if (season == "winter")
        {
            price = budget * 0.3;
            type = "Hotel";
        }
    }
    else if (budget > 100 && budget <= 1000)
    {
        vacation = "Balkans";
        if (season == "summer")
        {
            price = budget * 0.6;
            type = "Camp";
        }
        else if (season == "winter")
        {
            price = budget * 0.2;
            type = "Hotel";
        }
    }
    else
    {
        vacation = "Europe";
        price = budget * 0.1;
        type = "Hotel";
    }

    std::cout << "Somewhere in " << vacation << std::endl;
    std::cout << type << " - " << std::fixed << std::setprecision(2) << (budget - price);
}

void operatorsBetweenNumbers()
{
    int n1, n2;
    char symbol;
    std::cin >> n1 >> n2 >> symbol;

    switch(symbol)
    {
        case '+':
        {
            int sum = n1 + n2;
            if (sum % 2 == 0)
            {
                std::cout << n1 << ' ' << symbol << ' ' << n2 << " = " << sum << " - " << "even\n";
            }
            else
            {
                std::cout << n1 << ' ' << symbol << ' ' << n2 << " = " << sum << " - " << "odd\n";
            }
            break;
        }
        case '-':
        {
            int sum = n1 - n2;
            if (sum % 2 == 0)
            {
                std::cout << n1 << ' ' << symbol << ' ' << n2 << " = " << sum << " - " << "even\n";
            }
            else
            {
                std::cout << n1 << ' ' << symbol << ' ' << n2 << " = " << sum << " - " << "odd\n";
            }
            break;
        }
        case '*':
        {
            int sum = n1 * n2;
            if (sum % 2 == 0)
            {
                std::cout << n1 << ' ' << symbol << ' ' << n2 << " = " << sum << " - " << "even\n";
            }
            else
            {
                std::cout << n1 << ' ' << symbol << ' ' << n2 << " = " << sum << " - " << "odd\n";
            }
            break;
        }
        case '/':
        {
            if (n2 == 0)
            {
                std::cout << "Cannot divide " << n1 << " by zero\n";
            }
            else
            {
                std::cout << n1 << ' ' << symbol << ' ' << n2 << " = " << std::fixed << std::setprecision(2) << static_cast<double>(n1) / n2;
            }
            break;
        }
        case '%':
        {
            if (n2 == 0)
            {
                std::cout << "Cannot divide " << n1 << " by zero\n";
            }
            else
            {
                std::cout << n1 << ' ' << symbol << ' ' << n2 << " = " << static_cast<double>(n1 % n2);
            }
            break;
        }
    }
}

int main() 
{
    
    return 0;
}