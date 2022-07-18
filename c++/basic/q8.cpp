#include <iostream>
int main()
{
    float l, w, a;

    std::cout << "Enter length:";
    std::cin >> l;
    std::cout << "Enter width:";
    std::cin >> w;
    a = l * w;
    std::cout << "Area of circle:" << a;
}