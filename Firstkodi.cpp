#include <iostream>

int main() {
    int a;
    int b;
    std::cout << "მიუთითე სიგრძე  ";
    std::cin >> a;
    std::cout << "მიუთითე სიგანე  ";
    std::cin >> b;
    int z = a * b;

    std::cout << "ფართობი:" << z << "\n";
    return 0;
}