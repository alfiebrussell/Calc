#include <iostream>

int main() {
    std::cout << "====================\n"
        << " Simple Calculator\n"
        << "====================\n\n";

    std::string end;
    while (true) {
        int no1;
        char op;
        int no2;
        int result;

        std::cout << "Enter your first number: ";
        std::cin >> no1;
        while (std::cin.fail()) {
            std::cout << "That's not a number. Try again: ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cin >> no1;
        }

        std::cout << "Enter your operator (+, -, *, /): ";
        std::cin >> op;
        while (op != '+' && op != '-' && op != '*' && op != '/') {
            std::cout << "Not an operator \n";
            std::cin.ignore(10000, '\n');
            std::cout << "Enter your operator (+, -, *, /): ";
            std::cin >> op;
        }
        std::cout << "Enter your second number: ";
        std::cin >> no2;
        while (std::cin.fail()) {
            std::cout << "That's not a number. Try again: ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cin >> no2;
        }

        if (op == '+') {
            result = no1 + no2;
        }
        else if (op == '-') {
            result = no1 - no2;
        }
        else if (op == '*') {
            result = no1 * no2;
        }
        else if (op == '/') {
            result = no1 / no2;
        }

        std::cout << "Result: " << result;

        std::cout << "\n\n(End? y/n): ";
        std::cin >> end;
        if (end == "n") {
            std::cout << "\n\n";
            continue;
        }
        else {
			std::cout << "Okay, bye!\n";
            break;
        }
    }
}