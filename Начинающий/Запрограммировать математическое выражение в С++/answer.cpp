#include <iostream>

using namespace std;

int main()
{
    double a, b, f;

    // Вывод запроса для ввода чисел
    cout << "Введите значение a: ";
    cin >> a;

    cout << "Введите значение b: ";
    cin >> b;

    cout << "Введите значение f: ";
    cin >> f;

    // Вычисление выражения
    double result = (a + b - f / a) + f * a * a - (a + b);

    // Вывод результата
    cout << "Результат выражения: " << result << endl;

    return 0;
}

/*
Объяснение кода:

1. Включение заголовочного файла:
   - #include <iostream>:  Включает стандартный заголовочный файл для работы с вводом/выводом данных (например, cout и cin).

2. Пространство имен:
   - using namespace std;:  Использует пространство имен std, чтобы не писать std:: перед каждым элементом из этого пространства имен.

3. Функция main():
   - int main():  Точка входа в программу. Возвращает целое число.

4. Объявление переменных:
   - double a, b, f;:  Объявляет три переменные типа double для хранения чисел a, b, f. Тип double используется для хранения чисел с плавающей точкой.

5. Ввод данных:
   - cout << "Введите значение a: ";:  Выводит текст "Введите значение a: " на экран.
   - cin >> a;:  Считывает введенное пользователем число и сохраняет его в переменную a.
   - Аналогично для b и f.

6. Вычисление выражения:
   - double result = (a + b - f / a) + f * a * a - (a + b);:  Вычисляет заданное выражение и сохраняет результат в переменную result.

7. Вывод результата:
   - cout << "Результат выражения: " << result << endl;:  Выводит текст "Результат выражения: " и значение переменной result на экран. endl добавляет перевод строки в конец вывода.

8. Возврат значения:
   - return 0;:  Возвращает 0, что сигнализирует об успешном завершении программы.
   */