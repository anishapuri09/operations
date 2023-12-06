#include <iostream>

void swapNumbers(int& a, int& b) {
    std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    swapNumbers(num1, num2);

    return 0;
}
