#include <iostream>
#include <string>

using namespace std;

// Задание 10
int main10() {
    int number;
    int n1, n2, n3, n4, n5, n6, sum_l, sum_r;
    cout << "Введите шестизначное число: ";
    cin >> number;
    n6 = number % 10;
    number = number / 10;
    n5 = number % 10;
    number = number / 10;
    n4 = number % 10;
    number = number / 10;
    n3 = number % 10;
    number = number / 10;
    n2 = number % 10;
    number = number / 10;
    n1 = number % 10;
    sum_l = n1 + n2 + n3;
    sum_r = n4 + n5 + n6;
    if (sum_l % 2 != sum_r % 2) {
        cout << "Билет счастливый\n\n";
    }
    else {
        cout << "Билет обычный\n\n";
    }
    return 0;
}

// Задание 9
int main9() {
    int n;
	cout << "Введите число от 1 до 10: ";
    cin >> n;
    switch (n) {
    case 1: {
        cout << "I\n\n";
        break;
    }
    case 2: {
        cout << "II\n\n";
        break;
    }
    case 3: {
        cout << "III\n\n";
        break;
    }
    case 4: {
        cout << "IV\n\n";
        break;
    }
    case 5: {
        cout << "V\n\n";
        break;
    }
    case 6: {
        cout << "VI\n\n";
        break;
    }
    case 7: {
        cout << "VII\n\n";
        break;
    }
    case 8: {
        cout << "VIII\n\n";
        break;
    }
    case 9: {
        cout << "IX\n\n";
        break;
    }
    case 10: {
        cout << "X\n\n";
        break;
    }
    default: {
        cout << "Ошибка\n\n";
        break;
    }
    }
    return 0;
}

// Задание 8
int main8() {
    int x1, y1, x2, y2;
    int dx, dy;
	cout << "Введите координаты первой клетки (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Введите координаты второй клетки (x2, y2): ";
    cin >> x2 >> y2;
    dx = x2 - x1;
    dy = y2 - y1;
    if (dx < 0) {
        dx = -dx;
    }
    if (dy < 0) {
        dy = -dy;
    }
    if (dx == 2 && dy == 1 || dx == 1 && dy == 2) {
        cout << "Ход возможен\n\n";
    }
    else {
        cout << "Ход невозможен\n\n";
    }
    return 0;
}

// Задание 7
int main7() {
    char ch;
    cout << "Введите символ: ";
    cin >> ch;
    if (ch >= '0' && ch <= '9') {
        cout << "Цифра\n\n";
    }
    switch (ch) {
        case '+':
            cout << "Оператор\n\n";
            break;
        case '-':
            cout << "Оператор\n\n";
            break;
        case '*':
            cout << "Оператор\n\n";
            break;
        case '/':
            cout << "Оператор\n\n";
            break;
        case '(':
            cout << "Скобка\n\n";
            break;
        case ')':
            cout << "Скобка\n\n";
            break;
        case '{':
            cout << "Скобка\n\n";
            break;
        case '}':
            cout << "Скобка\n\n";
            break;
        case '[':
            cout << "Скобка\n\n";
            break;
        case ']':
            cout << "Скобка\n\n";
            break;
        default:
            cout << "Неизвестный символ!\n\n";
            break;
    }
    return 0;
}

// Задание 6
int main6() {
    int now, need;
    cout << "Введите текущий этаж: ";
    cin >> now;
    cout << "Введите нужный этаж: ";
    cin >> need;
    if (now >= 1 && need <= 9) {
        if (now > need) {
            cout << "Вы едете вниз\n\n";
        }
        else if (now < need) {
            cout << "Вы едете вверх\n\n";
        }
        else {
            cout << "Вы уже здесь\n\n";
        }
    }
    else {
        cout << "Неверный этаж\n\n";
    }
    return 0;
}

// Задание 5
int main5() {
    char letter, letter_of_bot = 'к';
    cout << "Введите 1 букву, вашу фигуру (к, н, б): ";
    cin >> letter;
    if (letter == 'к' && letter_of_bot == 'к') {
        cout << "Ничья\n\n";
    }
    else if (letter == 'н' && letter_of_bot == 'к') {
        cout << "Поражение\n\n";
    }
    else {
        cout << "Победа!\n\n";
    }
    return 0;
}

// Задание 4
int main4() {
    char letter;
    cout << "Введите 1 букву: ";
    cin >> letter;
    switch (letter) {
        case 'a':
            cout << "d\n\n";
            break;
        case 'x':
            cout << "a\n\n";
            break;
        case 'y':
            cout << "b\n\n";
            break;
        case 'z':
            cout << "c\n\n";
            break;
        default:
            cout << "Введён недопустимый символ!\n\n";
            break;
    }
    return 0;
}

// Задание 3
int main3() {
    int lvl;
    cout << "Введите уровень дня (1-10): ";
    cin >> lvl;
    if (lvl >= 1 && lvl <= 10) {
        if (lvl <= 3) {
            cout << "Держись, всё наладится\n\n";
        }
        else if (lvl <= 6) {
            cout << "Нормальный день\n\n";
        }
        else {
            cout << "Отличный день!\n\n";
        }
    }
    else {
        cout << "Такого уровня не существует!\n\n";
    }
    return 0;
}

// Задание 2
int main2() {
    string word;
    int password;
    cout << "Введите кодовое слово: ";
    cin >> word;
    cout << "Введите пароль: ";
    cin >> password;
    if (word == "admin" && password == 1234) {
        cout << "Доступ разрешён!\n\n";
    }
    else if (word == "admin" && password != 1234) {
        cout << "Неверный пароль!\n\n";
    }
    else if (word != "admin" && password == 1234) {
        cout << "Неверное кодовое слово!\n\n";
    }
    else {
        cout << "Кто вы такой?\n\n";
    }
    return 0;
}

// Задание 1
int main()
{
    setlocale(LC_ALL, "Russian");
    string color;
    cout << "Введите цвет светофора словом (red, yellow, green): ";
    cin >> color;
    char first_letter = color[0];
    switch (first_letter) {
        case 'r':
            cout << "Стоять!\n\n";
            break;
        case 'y':
            cout << "Приготовиться!\n\n";
            break;
        case 'g':
            cout << "Поехали!\n\n";
            break;
        default:
            cout << "Неизвестный цвет!\n\n";
            break;
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