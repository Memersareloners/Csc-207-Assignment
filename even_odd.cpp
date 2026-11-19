#include <iostream>
int main() {
    int num;
    char choice;

    do {  std::cout << "Enter a number: ";
    std::cin >> num;
    if (num % 2 == 0) {
        std::cout << "Even" << std::endl;
    } else {
       std::cout << "Odd" << std::endl;
    }
       std::cout << "Check another number? (y/n): ";
       std::cin >> choice;
    } while (choice == 'y' || choice == 'Y'); 

      return 0;

}