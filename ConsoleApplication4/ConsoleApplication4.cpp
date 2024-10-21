#include <iostream>

int reverse_number(int n, int reversed = 0) {
    // Базовый случай: если число стало нулем, возвращаем перевернутое число
    if (n == 0) {
        return reversed;
    }

    // Рекурсивный вызов: добавляем последнюю цифру к перевернутому числу
    return reverse_number(n / 10, reversed * 10 + n % 10);
}

int main() {
    int number = 321;
    int reversed_number = reverse_number(number);
    std::cout << reversed_number << std::endl;  // Вывод: 123
    return 0;
}
