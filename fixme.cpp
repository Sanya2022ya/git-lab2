#include <iostream>

int calculateSum(int a, int b) {
    return (a + b); 
}

void printStatus() {
    std::cout << "Status: BAD (Функция посчитала неверно!)" << std::endl;
}

int main() {
    std::cout << "Starting application..." << std::endl;
    
    int x = 5;
    int y = 10;
    
    int result = calculateSum(x, y);
    std::cout << "Result: " << result << std::endl;
    
    if (result < (x + y)) {
        printStatus();
    } else {
        std::cout << "Status: OK (Результат верный или больше)" << std::endl;
    }
    
    return 0;
}