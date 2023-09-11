﻿// Фомкин Г.А. 2ИСИП-122
// Задача на цикл "Пока"
/* Дано: 
Пользователь вводит с клавиатуры
последовательность ненулевых целых чисел.
Программа должна вывести на экран
максимальный и минимальный элементы
последовательности сразу после того, как
пользователь введёт 0 (т.е. заранее длина
последовательности неизвестна)
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    int max = -32768;
    int min = 32768;

    do {
        std::cin >> number;

        if (number != 0) {
            if (number > max) {
                max = number;
            }

            if (number < min) {
                min = number;
            }
        }
    } while (number != 0);

    std::cout << "Максимальный элемент: " << max << std::endl;
    std::cout << "Минимальный элемент: " << min << std::endl;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
