#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

void showMenu() {
    std::cout << "\n=== Scientific Calculator ===\n";
    std::cout << "Available operations:\n";
    std::cout << "1. Addition (a + b)\n";
    std::cout << "2. Subtraction (a - b)\n";
    std::cout << "3. Multiplication (a * b)\n";
    std::cout << "4. Division (a / b)\n";
    std::cout << "5. Power (pow(a, b))\n";
    std::cout << "6. Square Root (sqrt(a))\n";
    std::cout << "7. Logarithm (log(a))\n";
    std::cout << "8. Sine (sin(a))\n";
    std::cout << "9. Cosine (cos(a))\n";
    std::cout << "10. Tangent (tan(a))\n";
    std::cout << "11. Exit\n";
    std::cout << "=============================\n";
}

int main() {
    int choice;
    double a, b;

    std::cout << std::fixed << std::setprecision(6);

    do {
        showMenu();
        std::cout << "Choose an operation (1-11): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter two numbers: ";
                std::cin >> a >> b;
                std::cout << "Result: " << a + b << "\n";
                break;
            case 2:
                std::cout << "Enter two numbers: ";
                std::cin >> a >> b;
                std::cout << "Result: " << a - b << "\n";
                break;
            case 3:
                std::cout << "Enter two numbers: ";
                std::cin >> a >> b;
                std::cout << "Result: " << a * b << "\n";
                break;
            case 4:
                std::cout << "Enter two numbers: ";
                std::cin >> a >> b;
                if (b == 0)
                    std::cout << "Error: Division by zero.\n";
                else
                    std::cout << "Result: " << a / b << "\n";
                break;
            case 5:
                std::cout << "Enter base and exponent: ";
                std::cin >> a >> b;
                std::cout << "Result: " << pow(a, b) << "\n";
                break;
            case 6:
                std::cout << "Enter number: ";
                std::cin >> a;
                if (a < 0)
                    std::cout << "Error: Negative input for sqrt.\n";
                else
                    std::cout << "Result: " << sqrt(a) << "\n";
                break;
            case 7:
                std::cout << "Enter number: ";
                std::cin >> a;
                if (a <= 0)
                    std::cout << "Error: Logarithm undefined for non-positive numbers.\n";
                else
                    std::cout << "Result: " << log(a) << "\n";
                break;
            case 8:
                std::cout << "Enter angle in radians: ";
                std::cin >> a;
                std::cout << "Result: " << sin(a) << "\n";
                break;
            case 9:
                std::cout << "Enter angle in radians: ";
                std::cin >> a;
                std::cout << "Result: " << cos(a) << "\n";
                break;
            case 10:
                std::cout << "Enter angle in radians: ";
                std::cin >> a;
                std::cout << "Result: " << tan(a) << "\n";
                break;
            case 11:
                std::cout << "Exiting calculator. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 11);

    return 0;
}
