#include <iostream>


void helloSoftUni()
{
    std::cout << "Hello SoftUni\n";
}

void NumsOnetoTen()
{
    for (int i = 1; i <= 10; ++i)
    {
        std::cout << i << '\n';
    }
}

void rectangleArea()
{
    int a, b;
    std::cin >> a >> b;

    std::cout << (a * b) << std::endl;
}

void inchesToCantimeters()
{
    double inches;
    std::cin >> inches;

    std::cout << (inches * 2.54) << std::endl;
}

void greetingByName()
{
    std::string name;
    std::cin >> name;

    std::cout << "Hello, " << name << '!' << std::endl;
}

void concatenateData()
{
    std::string name, lastName, town;
    int age;
    std::cin >> name >> lastName >> age >> town;

    std::cout << "You are " << name << " " << lastName << ", a " << age << "-years old person from " << town << "." << std::endl;
}

void projectsCreation()
{
    std::string nameOfArchitect;
    int numberOfProjects;
    std::cin >> nameOfArchitect >> numberOfProjects;

    std::cout << "The architect " << nameOfArchitect << " will need " << (numberOfProjects * 3) << " hours to complete " << numberOfProjects << " project/s." << std::endl;
}

void petShop()
{
    const double dogFoodPrice = 2.50;
    const int catFoodPrice = 4;

    int dogFoodQuantity, catFoodQuantity;
    std::cin >> dogFoodQuantity >> catFoodQuantity;

    std::cout << (dogFoodQuantity * dogFoodPrice) + (catFoodQuantity * catFoodPrice) << " lv." << std::endl;
}

void yardGreening()
{
    const double price = 7.61;

    double toGreen;
    std::cin >> toGreen;

    double fullPrice = toGreen * price;
    double discount = fullPrice * 0.18;

    std::cout << "The final price is: " << (fullPrice - discount) << " lv." << std::endl;
    std::cout << "The discount is: " << discount << " lv." << std::endl;
}