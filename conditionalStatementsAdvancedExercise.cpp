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

int main() 
{
    
    const int rosesPrice = 5;
    const double daliaPrice = 3.80;
    const double lalePrice = 2.80;
    const int narcisPrice = 3;
    const double gladiolaPrice = 2.50;
    
    std::string type;
    int budget, quantity;
    std::cin >> type >> budget >> quantity;
    double discount = 0.0;
    
    double price;
    
    if (type == "Roses")
    {
        price = rosesPrice;
        if (quantity > 80)
        {
            discount = price * 0.1;
            price -= discount;
            std::cout << price << std::endl;
        }
    }
    else if (type == "Dahlias")
    {
        price = daliaPrice;
        if (quantity > 90)
        {
            discount = price * 0.15;
            price -= discount;
        }
    }
    else if (type == "Tulips")
    {
        price = lalePrice;
        if (quantity > 80)
        {
            discount = price * 0.15;
            price -= discount;
        }
    }
    else if (type == "Narcissus")
    {
        price = narcisPrice;
        if (quantity < 120)
        {
            discount = price * 0.15;
            price += discount;
        }
    }
    else if (type == "Gladiolus")
    {
        price = gladiolaPrice;
        if (quantity < 80)
        {
            discount = price * 0.2;
            price += discount;
        }
    }
    
    if (budget >= price)
    {
        std::cout << "Hey, you have a great garden with " << quantity << ' ' << type << " and " << budget - price << " leva left.\n";
    }
    else
    {
        std::cout << "Not enough money, you need " << price - budget << " leva more.\n";
    }
    
    return 0;
}