// CodeLesson_01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <string>
#include <iostream>

void compareNumbers(int num1, int num2)
{
    if (num1 < num2) {
        std::cout << "The first number is less than the second one." << std::endl;
    }
    else if (num1 > num2) {
        std::cout << "The first number is greater than the second one." << std::endl;
    }
    else {
        std::cout << "The numbers are equal." << std::endl;
    }
}

int main()
{
    int num1, num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    compareNumbers(num1, num2);
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
