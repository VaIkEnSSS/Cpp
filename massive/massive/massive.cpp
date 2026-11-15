#include <iostream>

using namespace std;

int main2() {
    const int size1 = 5;
    const int size2 = 10;
    int a[size1] = { 3, 0, -2, 5, 0 };
    int b[size1] = { -1, 4, 0, -7, 6 };
    int c[size2];
    int k = 0;
    for (int i = 0; i < size1; i++) {
        if (a[i] > 0) c[k++] = a[i];
    }
    for (int i = 0; i < size1; i++) {
        if (b[i] > 0) c[k++] = b[i];
    }
    for (int i = 0; i < size1; i++) {
        if (a[i] == 0) c[k++] = a[i];
    }
    for (int i = 0; i < size1; i++) {
        if (b[i] == 0) c[k++] = b[i];
    }
    for (int i = 0; i < size1; i++) {
        if (a[i] < 0) c[k++] = a[i];
    }
    for (int i = 0; i < size1; i++) {
        if (b[i] < 0) c[k++] = b[i];
    }
    cout << "Массив A: ";
    for (int i = 0; i < size1; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Массив B: ";
    for (int i = 0; i < size1; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    cout << "Результат C: ";
    for (int i = 0; i < size2; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
    return 0;
}

int main() {
    setlocale(LC_ALL, "Russian");
    const int N = 10;
    int a[N] = { 0, 5, 0, -3, 0, 7, 0, 2, 0, 9 };
    cout << "Первоначальный массив: ";
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    int pos = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] != 0) a[pos++] = a[i];
    }
    while (pos < N) {
        a[pos++] = -1;
    }
    cout << "Сжатый массив: ";
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    main2();
    return 0;
}