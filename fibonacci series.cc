#include <iostream>

void generateFibonacci(int n) {
    int a = 0, b = 1, c;

    std::cout << "Fibonacci series up to " << n << " terms: ";

    for (int i = 0; i < n; ++i) {
        std::cout << a << " ";

        c = a + b;
        a = b;
        b = c;
    }

    std::cout << std::endl;
}

int main() {
    int terms;

    std::cout << "Enter the number of terms for Fibonacci series: ";
    std::cin >> terms;

    generateFibonacci(terms);

    return 0;
}
