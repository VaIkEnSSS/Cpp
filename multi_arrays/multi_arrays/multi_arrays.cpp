#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// Задание 1
void task1() {
    int arr[3][4];
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = rand() % 10;
        }
    }
    cout << "Массив 3x4:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
            if (arr[i][j] == 0) {
                count++;
            }
        }
        cout << endl;
    }
    cout << "Количество элементов, равных нулю: " << count << endl << endl;
}

// Задание 3
void task3() {
    int arr[5][5];
    cout << "Фигура а:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= i) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Фигура б:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j <= i) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Фигура в:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i <= 2 && j >= i && j <= 4 - i) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Фигура г:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i >= 2 && j >= 4 - i && j <= i) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Фигура д:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i <= 2 && j >= i && j <= 4 - i) || (i >= 2 && j >= 4 - i && j <= i)) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Фигура е:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((j <= i && j <= 4 - i) || (j >= i && j >= 4 - i)) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Фигура ж:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int offset;
            if (i < 2) offset = 2 - i; else offset = i - 2;
            if (j <= 2 - offset) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Фигура з:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int offset;
            if (i < 2) {
                offset = 2 - i;
            } else {
                offset = i - 2;
            }
            if (j >= 2 + offset) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Фигура и:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j <= 4 - i) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Фигура к:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= 4 - i) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Задание 2
void task2() {
    int mat[5][5];
    int max = -1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= i) {
                mat[i][j] = rand() % 100;
            }
            else {
                mat[i][j] = 0;
            }
        }
    }
    cout << "Матрица a со случайными числами в синей зоне:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= i) {
                if (mat[i][j] > max) {
                    max = mat[i][j];
                }
            }
        }
    }
    cout << "Наибольшее значение в синей зоне: " << max << endl << endl;
}

int main() {
    srand(time(NULL));
	setlocale(LC_ALL, "Russian");
    task1();
    task3();
    task2();
    return 0;
}