#include <iostream>

// Function to generate and print Fibonacci sequence
void generateFibonacci(int n) {
    int first = 0, second = 1;

    std::cout << "Fibonacci Sequence up to " << n << " terms: ";

    for (int i = 0; i < n; ++i) {
        std::cout << first << " ";

        int next = first + second;
        first = second;
        second = next;
    }

    std::cout << std::endl;
}

int main() {
    // Input: number of terms in the Fibonacci sequence
    int terms;
    std::cout << "Enter the number of Fibonacci terms to generate: ";
    std::cin >> terms;

    // Generate and print Fibonacci sequence
    generateFibonacci(terms);

    return 0;
}
