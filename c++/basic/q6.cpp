#include <iostream>
int main()
{
    float p = 3.14, r, a;

    std::cout << "Enter radius:";
    std::cin >> r;

    a = p * (r * r);
    std::cout << "Area of circle:" << a;
}