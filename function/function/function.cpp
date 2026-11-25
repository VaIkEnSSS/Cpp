#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// Задание 1
void ConvertNumber(int number, int base) {
    char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char result[64];
    int i = 0;
    while (number > 0) {
        result[i] = digits[number % base];
        i++;
        number /= base;
    }
    cout << "Результат: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << result[j];
    }
    cout << endl;
}

// Задание 2
void PlayDiceGame() {
    srand(time(NULL));
    int first;
    cout << "Кто ходит первым? 1 - человек, 2 - компьютер: ";
    cin >> first;
    int total[2] = { 0, 0 };
    int order[2];
    if (first == 1) {
        order[0] = 0;
        order[1] = 1;
    }
    else {
        order[0] = 1;
        order[1] = 0;
    }
    for (int round = 1; round <= 5; round++) {
        cout << "\nРаунд " << round << endl;
        for (int k = 0; k < 2; k++) {
            int p = order[k];
            int d1 = rand() % 6 + 1;
            int d2 = rand() % 6 + 1;
            if (p == 0) {
                cout << "Человек: ";
            }
            else {
                cout << "Компьютер: ";
            }
            cout << d1 << " и " << d2 << endl;
            switch (d1) {
            case 1: cout << "+-------+\n|       |\n|   o   |\n|       |\n+-------+\n"; break;
            case 2: cout << "+-------+\n| o     |\n|       |\n|     o |\n+-------+\n"; break;
            case 3: cout << "+-------+\n| o     |\n|   o   |\n|     o |\n+-------+\n"; break;
            case 4: cout << "+-------+\n| o   o |\n|       |\n| o   o |\n+-------+\n"; break;
            case 5: cout << "+-------+\n| o   o |\n|   o   |\n| o   o |\n+-------+\n"; break;
            case 6: cout << "+-------+\n| o   o |\n| o   o |\n| o   o |\n+-------+\n"; break;
            }
            switch (d2) {
            case 1: cout << "+-------+\n|       |\n|   o   |\n|       |\n+-------+\n"; break;
            case 2: cout << "+-------+\n| o     |\n|       |\n|     o |\n+-------+\n"; break;
            case 3: cout << "+-------+\n| o     |\n|   o   |\n|     o |\n+-------+\n"; break;
            case 4: cout << "+-------+\n| o   o |\n|       |\n| o   o |\n+-------+\n"; break;
            case 5: cout << "+-------+\n| o   o |\n|   o   |\n| o   o |\n+-------+\n"; break;
            case 6: cout << "+-------+\n| o   o |\n| o   o |\n| o   o |\n+-------+\n"; break;
            }
            total[p] += d1 + d2;
        }
    }
    cout << "\nИтог: человек = " << total[0] << ", компьютер = " << total[1] << endl;
    if (total[0] > total[1]) {
        cout << "Победил человек!" << endl;
    }
    else if (total[1] > total[0]) {
        cout << "Победил компьютер!" << endl;
    }
    else {
        cout << "Ничья!" << endl;
    }
    cout << "Средняя сумма за бросок: человек = " << total[0] / 5.0 << ", компьютер = " << total[1] / 5.0 << endl;
}

//  Задание 3
void Rectangle(int width, int height) {
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            cout << '*';
        }
        cout << endl;
    }
}

//  Задание 4
void Factorial(int number) {
    int factorial = 1;
    for (int i = number; i > 0; i--) {
        factorial *= i;
    }
    cout << factorial << endl;
}

// Задание 5
void Simple(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << n << " — не простое число" << endl;
            return;
        }
    }
    cout << n << " — простое число" << endl;
}

// Задание 6
void MinMaxArray(int arr[], int size) {
    int minValue = arr[0];
    int maxValue = arr[0];
    int minIndex = 0;
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }
    cout << "Минимум: " << minValue << ", индекс: " << minIndex << endl;
    cout << "Максимум: " << maxValue << ", индекс: " << maxIndex << endl;
}

// Задание 7
void ReverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    cout << "Перевёрнутый массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    ConvertNumber(27, 16); //  Задание 1
    PlayDiceGame(); // Задание 2
    Rectangle(10, 100); //  Задание 3
    Factorial(5); //    Задание 4
	Simple(7); //  Задание 5
    int array1[8] = { 5, -2, 10, 3, 10, 0, -7, 8 };
	MinMaxArray(array1, 8); //  Задание 6
    int arr2[7] = { 1, 2, 3, 4, 5, 6, 7 };
	ReverseArray(arr2, 7); // Задание 7
	return 0;
}