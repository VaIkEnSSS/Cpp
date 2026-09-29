#include <iostream>

using namespace std;

int main10() {
    cout << "Задание 10 \n";
    const double tax = 0.13;
    double rate, hours, prize, summ;
	cout << "Введите ставку: ";
	cin >> rate;
	cout << "Введите количество часов: ";
	cin >> hours;
	cout << "Введите премию: ";
	cin >> prize;
	summ = rate * hours + prize;
	cout << "Начислено: " << summ << "\n";
	cout << "Налог: " << summ * tax << "\n";
	cout << "На руки: " << summ - summ * tax << "\n\n";
	return 0;
}

int main9() {
	cout << "Задание 9 \n";
	int number, n1, n2, n3, n4;
	cout << "Введите четырёхзначное число: ";
	cin >> number;
	n1 = number / 1000;
	n2 = (number % 1000) / 100;
	n3 = (number % 100) / 10;
	n4 = number % 10;
	cout << "Цифры числа: " << n1 << " " << n2 << " " << n3 << " " << n4 << "\n\n";
	return 0;
}

int main8() {
    cout << "Задание 8 \n";
    const double pi = 3.14159;
	double r, s, l;
	cout << "Введите радиус окружности: ";
	cin >> r;
	l = 2 * pi * r;
	s = pi * r * r;
	cout << "Длина окружности: " << l << "\n";
	cout << "Площадь круга: " << s << "\n\n";
	return 0;
}

int main7() {
	cout << "Задание 7 \n";
	const double number1 = 9, number2 = 5;
	double c, f;
	cout << "Введите температуру в градусах цельсия: ";
	cin >> c;
    f = c * number1 / number2 + 32;
    cout << "Температура в градусах фаренгейта: " << f << "\n\n";
	return 0;
}

int main6() {
    cout << "Задание 6 \n";
    int number;
    cout << "Введите число: ";
    cin >> number;
    cout << number / 3600 << ":" << (number % 3600) / 60 << ":" << number % 60 << "\n\n";
    return 0;
}

int main5() {
    cout << "Задание 5 \n";
    double num1, num2, num3, result;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    cout << "Введите третье число: ";
    cin >> num3;
    result = (num1 + num2 + num3) / 3;
    cout << "Среднее арифметическое: " << result << "\n\n";
    return 0;
}

int main4() {
    cout << "Задание 4 \n";
    double a, b, p, s;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    p = 2 * (a + b);
    s = a * b;
    cout << "Периметр: " << p << "\n";
    cout << "Площадь: " << s << "\n\n";
    return 0;
}

int main3() {
    cout << "Задание 3 \n";
    int num1, num2;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    cout << "Сумма: " << num1 + num2 << "\n";
    cout << "Разность: " << num1 - num2 << "\n";
    cout << "Произведение: " << num1 * num2 << "\n";
    cout << "Целая часть от деления: " << num1 / num2 << "\n";
    cout << "Остаток от деления: " << num1 % num2 << "\n\n";
    return 0;
}

int main2() {
    cout << "Задание 2 \n";
    int num1, num2;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    cout << "Сумма чисел: " << num1 + num2 << "\n\n";
    return 0;
}

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Задание 1 \n";
    cout << "Hello World!\n\n";
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