#include <iostream>
#include <iomanip>
#include <cmath>


void numbersFromOneToHundred()
{
    for (int i = 1; i <= 100; ++i)
    {
        std::cout << i << std::endl;
    }
}

void numbersNtoOne()
{
    int n;
    std::cin >> n;
    
    for (int i = n; i >= 1; --i)
    {
        std::cout << i << std::endl;
    }
}

void numbersOneNwithStepThree()
{
    int n;
    std::cin >> n;
    
    for (int i = 1; i <= n; i += 3)
    {
        std::cout << i << std::endl;
    }
}

void evenPowersOfTwo()
{
    int n;
    std::cin >> n;
    
    for (int i = 0; i <= n; i += 2)
    {
        std::cout << pow(2, i) << std::endl;
    }
}

void characterSequence()
{
    std::string n;
    getline(std::cin, n);
    
    for (int i = 0; i <= n.size() - 1; ++i)
    {
        std::cout << n[i] << std::endl;
    }
}

void vowelsSum()
{
    std::string n;
    getline(std::cin, n);
    
    int sum = 0;
    for (int i = 0; i <= n.size() - 1; ++i)
    {
        if (n[i] == 'a')
        {
            sum += 1;
        }
        else if (n[i] == 'e')
        {
            sum += 2;
        }
        else if (n[i] == 'i')
        {
            sum += 3;
        }
        else if (n[i] == 'o')
        {
            sum += 4;
        }
        else if (n[i] == 'u')
        {
            sum += 5;
        }
    }
    std::cout << sum << std::endl;
}

void sumNumbers()
{
    int n;
    std::cin >> n;
    
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        int digits;
        std::cin >> digits;
        sum += digits;
    }
    std::cout << sum << std::endl;
}

void numberSequence()
{
    int n;
    std::cin >> n;
    
    int maxNumber = INT_MIN;
    int minNumber = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        int digits;
        std::cin >> digits;
        
        if (digits > maxNumber)
        {
            maxNumber = digits;
        }
        if (digits < minNumber)
        {
            minNumber = digits;
        }
    }
  
    std::cout << "Max number: " << maxNumber << std::endl;
    std::cout << "Min number: " << minNumber << std::endl;
}

void leftAndRightSum()
{
    int n;
    std::cin >> n;
    
    int leftSum = 0, rightSum = 0;
    for (int i = 0; i < n; ++i)
    {
        int digits;
        std::cin >> digits;
        leftSum += digits;
    }
    
    for (int j = 0; j < n; ++j)
    {
        int digits;
        std::cin >> digits;
        rightSum += digits;
    }
    
    if (leftSum == rightSum)
    {
        std::cout << "Yes, sum = " << leftSum;
    }
    else
    {
        std::cout << "No, diff = " << abs(leftSum - rightSum);
    }
}

void oddEvenSum()
{
    int n;
    std::cin >> n;
    
    int evenSum = 0, oddSum = 0;
    for (int i = 1; i <= n; ++i)
    {
        int digits;
        std::cin >> digits;
        
        if (i % 2 == 0)
        {
            evenSum += digits;
        }
        else
        {
            oddSum += digits;
        }
    }
    
    if (evenSum == oddSum)
    {
         std::cout << "Yes\nSum = " << evenSum;
    }
    else
    {
        std::cout << "No\nDiff = " << abs(evenSum - oddSum) << std::endl;
    }
}


int main()
{
    
    return 0;
}