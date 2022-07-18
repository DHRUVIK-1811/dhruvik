#include <iostream>
int main()
{
    int m, p, c, total, per;

    std::cout << "\nEnter maths marks: ";
    std::cin >> m;
    std::cout << "\nEnter physics marks: ";
    std::cin >> p;
    std::cout << "\nEnter chemistry marks: ";
    std::cin >> c;
    total = m + p + c;
    std::cout << "\nTotal: " << total;
    per = total / 3;
    std::cout << "\npercentage:" << per;
}
