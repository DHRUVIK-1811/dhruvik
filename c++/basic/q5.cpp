#include <iostream>
int main()
{
    float c, fahrenhit;

    std::cout << "Enter celsius:";
    std::cin >> c;

    fahrenhit = (c * 9 / 5) + 32;
    std::cout << "fahrenhit : " << fahrenhit << "f";
}