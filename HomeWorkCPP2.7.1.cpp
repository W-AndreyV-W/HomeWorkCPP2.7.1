#include <iostream>
#include <locale.h>

#define MODE '1'

#if !defined MODE
#error Определите MODE
#endif

#if MODE == '1'
void add(int& num1, int& num2) {
    std::cout << "Результат сложения: " << num1 + num2 << std::endl;
}
#endif

int main()
{
    setlocale(LC_ALL, "Russian");
#if MODE == '0'
    std::cout << "Работаю в режиме тренировки" << sdt::endl;
#elif MODE == '1'
    int num1 = 0, num2 = 0;
    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите число 1: ";
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;
    add(num1, num2);
#else
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif
}