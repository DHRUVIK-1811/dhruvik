#include <iostream>
int main()
{
    float feet, inches;

    std::cout << "Enter feet:";
    std::cin >> feet;

    inches = feet * 12;
    std::cout << "inches : " << inches;
}