#include <iostream>
int main()
{
    float h, b, a;

    std::cout << "Enter height:";
    std::cin >> h;
    std::cout << "Enter base:";
    std::cin >> b;
    a = h * b / 2;
    std::cout << "Area of circle:" << a;
}