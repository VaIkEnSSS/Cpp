#include <iostream>

using namespace std;

int main4() {
    double distance_ab, distance_bc, weight, consumption, fuel_ab, fuel_bc, tank_сapacity, fuel_left, refuel;
    tank_сapacity = 300;
    cout << "Задание 4\n";
    cout << "Введите расстояние между a и b: ";
    cin >> distance_ab;
    cout << "Введите расстояние между b и c: ";
    cin >> distance_bc;
    cout << "Введите вес груза: ";
    cin >> weight;
    if (weight > 2000) {
        cout << "Самолёт не поднимится";
        return 0;
    }
    if (weight <= 500) {
        consumption = 1;
    }
    else if (weight <= 1000) {
        consumption = 4;
    }
    else if (weight <= 1500) {
        consumption = 7;
    }
    else {
        consumption = 9;
    }
    fuel_ab = distance_ab * consumption;
    fuel_bc = distance_bc * consumption;
    if (fuel_ab > tank_сapacity) {
        cout << "Не хватает топлива на участке АВ";
        return 0;
    }
    if (fuel_bc > tank_сapacity) {
        cout << "Не хватает топлива на участке ВС";
        return 0;
    }
    fuel_left = tank_сapacity - fuel_ab;
    refuel = fuel_bc - fuel_left;
    if (refuel < 0) {
        refuel = 0;
    }
    cout << "Минимальное количество топлива для дозаправки в пункте b: " << refuel;
    return 0;
}

int main3() {
    int max_number, n1, n2, n3, n4, n5, n6, n7;
    cout << "Задание 3\n\n";
    cout << "Введите первое число: ";
    cin >> n1;
    cout << "Введите второе число: ";
    cin >> n2;
    cout << "Введите третье число: ";
    cin >> n3;
    cout << "Введите четвёртое число: ";
    cin >> n4;
    cout << "Введите пятое число: ";
    cin >> n5;
    cout << "Введите шестое число: ";
    cin >> n6;
    cout << "Введите седьмое число: ";
    cin >> n7;
    if (n1 > n2) {
        max_number = n1;
    }
    else {
        max_number = n2;
    }
    if (n3 > max_number) {
        max_number = n3;
    }
    if (n4 > max_number) {
        max_number = n4;
    }
    if (n5 > max_number) {
        max_number = n5;
    }
    if (n6 > max_number) {
        max_number = n6;
    }
    if (n7 > max_number) {
        max_number = n7;
    }
    cout << "Максимальное число: " << max_number << "\n\n";
    return 0;
}

int main2() {
    int number, n1, n2, n3, n4;
    cout << "Задание 2\n\n";
    cout << "Введите 4-значное число: \n";
    cin >> number;
    if (number / 1000 < 1) {
        cout << "Число не 4-значное\n";
    }
    else if (number / 1000 > 9) {
        cout << "Число не 4-значное\n";
    }
    else {
        cout << "Число 4-значное\n";
    }
    n1 = number / 1000;
    n2 = (number / 100) % 10;
    n3 = (number / 10) % 10;
    n4 = number % 10;
    cout << "Ответ: " << n2 << n1 << n4 << n3 << "\n\n";
    return 0;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int number, n1, n2, n3, n4, n5, n6, summ1, summ2;
    cout << "Задание 1\n\n";
    cout << "Введите 6-значное число: ";
    cin >> number;
    if (number / 100000 < 1 || number / 100000 > 9) {
        cout << "Число не 6-значное\n";
    }
    else {
        cout << "Число 6-значное\n";
        n1 = number / 100000;
        n2 = (number / 10000) % 10;
        n3 = (number / 1000) % 10;
        n4 = (number / 100) % 10;
        n5 = (number / 10) % 10;
        n6 = number % 10;
        summ1 = n1 + n2 + n3;
        summ2 = n4 + n5 + n6;
        if (summ1 == summ2) {
            cout << "Число " << number << " счастливое)\n\n";
        }
        else {
            cout << "Число " << number << " грустное(\n\n";
        }
    }
    main2();
    main3();
    main4();
    return 0;
}