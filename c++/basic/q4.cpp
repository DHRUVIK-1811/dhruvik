#include <iostream>
int main()
{
    float cm, inch;

    std::cout << "Enter inch:";
    std::cin >> inch;

    cm = inch * 2.54;
    std::cout << "cm : " << cm;
}