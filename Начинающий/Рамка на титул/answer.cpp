#include <iostream>
#include <string>
#include <limits>
#include <list>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>

using namespace std;

int main(int argc, char *argv[])
{
    char sign = '*';
    int space = 2;

    int width = 0;
    list<string> lines = {};

    string user_input;
    while (true)
    {
        cout << "Введите строку для добавления в титульник:" << "(Введите q для окончания ввода)" << endl;
        getline(cin, user_input);

        if (user_input == "q")
        {
            break;
        }
        else if (user_input.empty())
        {
            cout << "Ошибка: Строка не может быть пустой." << endl;
        }
        else
        {
            lines.push_back(user_input);
            width = max(width, (int)(user_input.size()));
        }
    }

    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

    int left_space_width = (w.ws_col - width) / 2;

    string top_bottom_line = string(width + 2 + (space * 2), sign);

    cout << string(left_space_width, ' ');

    cout << top_bottom_line << endl;

    for (string line : lines)
    {
        cout << string(left_space_width, ' ');

        cout << sign;
        cout << string(space, ' ');
        cout << line;
        cout << string(width - static_cast<int>(line.size()) + space, ' ');
        cout << sign << endl;
    }

    cout << string(left_space_width, ' ');

    cout << top_bottom_line << endl;

    return 0;
}