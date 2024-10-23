#include <iostream>

using namespace std;

int main()
{
    int number, digit1, digit2, minDigit, maxDigit;

    cout << "Введите двухзначное натуральное число: ";
    cin >> number;

    // Проверка, является ли число двухзначным
    if (number < 10 || number > 99)
    {
        cout << "Некорректный ввод. Число должно быть двухзначным." << endl;
        return 1; // Выход с кодом ошибки
    }

    // Извлечение цифр
    digit1 = number / 10;
    digit2 = number % 10;

    // Определение наименьшей и наибольшей цифр
    minDigit = min(digit1, digit2);
    maxDigit = max(digit1, digit2);

    cout << "Наименьшая цифра: " << minDigit << endl;
    cout << "Наибольшая цифра: " << maxDigit << endl;

    return 0;
}
