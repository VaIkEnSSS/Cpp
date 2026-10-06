#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main10() {
    int hour;
    cout << "Задание 10\n\n";
    cin >> hour;
    if (hour < 0 || hour > 23) cout << "Ошибка\n";
    else if (hour >= 6 && hour <= 11) {
        cout << "Доброе утро\n";
    }
    else if (hour >= 12 && hour <= 17) {
        cout << "Добрый день\n";
    }
    else if (hour >= 18 && hour <= 22) {
        cout << "Добрый вечер\n";
    }
    else {
        cout << "Доброй ночи\n";
    }
    return 0;
}

int main9() {
    double sum;
    double discount = 0;
    cout << "Задание 9\n\n";
    cin >> sum;
    if (sum > 10000) {
        discount = 15;
    }
    else if (sum > 5000) {
        discount = 10;
    }
    else if (sum >= 1000) {
        discount = 5;
    }
    cout << sum - sum * discount / 100 << "\n";
    return 0;
}

int main8() {
    double a, b;
    char sym;
    cout << "Задание 8\n\n";
    cin >> a >> b >> sym;
    if (sym == '+') {
        cout << a + b;
    }
    else if (sym == '-') {
        cout << a - b;}
    else if (sym == '*') {
        cout << a * b;}
    else if (sym == '/') {
        if (b == 0) cout << "деление на ноль\n";
        else { 
            cout << a / b;}
    }
    return 0;
}

int main7() {
    int a, b, c;
    cout << "Задание 7\n\n";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "равносторонний\n";
        }
        else if (a == b || b == c || a == c) {
            cout << "равнобедренный\n";
        }
        else {
            cout << "разносторонний\n";
        }
    }
    else {
        cout << "не существует\n";
    }
    return 0;
}

int main6() {
        double a, b, c;
        cout << "Задание 6\n\n";
        cout << "Введите 3 числа: \n";
        cin >> a;
		cin >> b;
		cin >> c;
        if (a == 0) {
            if (b == 0) {
                if (c == 0) {
                    cout << "бесконечно много корней\n";
                }
                else {
                    cout << "нет корней\n";
                }
            }
            else {
                cout << "1 корень: " << -c / b << "\n";
            }
        }
        else {
            double d = b * b - 4 * a * c;
            if (d < 0) {
                cout << "нет корней\n";
            }
            else if (d == 0) {
                cout << "1 корень: " << -b / (2 * a) << "\n";
            }
            else {
                cout << "2 корня: " << (-b + sqrt(d)) / (2 * a) << " и " << (-b - sqrt(d)) / (2 * a) << "\n";
            }
        }
        return 0;
}

int main5() {
    int num;
    cout << "Задание 5\n\n";
    cout << "Введите год: \n";
    cin >> num;
    if (num % 4 == 0 && num % 100 != 0) {
        cout << num << " - високосный год\n\n";
    }
    else {
        cout << num << " - не високосный год\n\n";
    }
    return 0;
}

int main4() {
    int num;
    cout << "Задание 4\n\n";
    cin >> num;
    if (num >= 90 && num <= 100) {
        cout << "Отлично\n\n";
    }
    else if (num >= 75 && num <= 89) {
        cout << "Хорошо\n\n";
    }
    else if (num >= 60 && num <= 74) {
        cout << "Удовлетворительно\n\n";
    }
    else if (num >= 0 && num <= 59) {
        cout << "Неудовлетворительно\n\n";
    }
    return 0;
}

int main3() {
    int num;
    cout << "Задание 3\n\n";
    cout << "Введите число: \n";
    cin >> num;
    if (num > 0) {
        cout << "Число " << num << " - положительное\n\n";
    }
    else if (num == 0) {
        cout << "Число " << num << " - равно нулю\n\n";
    }
    else if (num < 0) {
        cout << "Число " << num << " - отрицательное\n\n";
    }
    return 0;
}

int main2() {
    int a, b, c, maximum;
    cout << "Задание 2\n\n";
    cout << "Введите 3 числа: \n";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b) {
        maximum = a;
    }
    else {
        maximum = b;
    }
    if (maximum < c) {
        maximum = c;
    }
    cout << maximum << " - наибольшее число\n\n";
    return 0;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    cout << "Задание 1\n\n";
    cout << "Введите число: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "Число чётное\n\n";
    }
    else {
        cout << "Число не чётное\n\n";
    }
    main2();
    main3();
    main4();
    main5();
    main6();
    main7();
    main8();
	main9();
    main10();
    return 0;
}