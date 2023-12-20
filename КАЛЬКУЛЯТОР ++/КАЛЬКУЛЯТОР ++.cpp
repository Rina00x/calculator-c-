#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    float num1, num2;
    char operation;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "Выберите операцию (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Результат: ";

    switch (operation) {
    case '+':
        std::cout << num1 + num2;
        break;
    case '-':
        std::cout << num1 - num2;
        break;
    case '*':
        std::cout << num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            std::cout << num1 / num2;
        else
            std::cout << "Ошибка: деление на ноль!";
        break;
    default:
        std::cout << "Ошибка: некорректная операция!";
        break;
    }

    std::cout << std::endl;

    return 0;
}