#include <iostream>

int calculateSum(int a, int b) {
    return a + b;
}

void printStatus() {
    std::cout << "Status: BAD" << std::endl;
}

int main() {
    std::cout << "Starting application..." << std::endl;
    int result = calculateSum(5, 10);
    std::cout << "Result: " << result << std::endl;
    printStatus();
    return 0;
}
