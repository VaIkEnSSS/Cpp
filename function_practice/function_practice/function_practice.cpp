#include <iostream>

using namespace std;

// Задание 1
void Rectangle(int N, int K) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            cout << '*';
        }
        cout << endl;
    }
}

//  Задание 2
void Factorial(int n) {
    long long factorial = 1;
    for (int i = n; i > 0; i--) {
        factorial *= i;
    }
    cout << factorial << endl;
}

// Задание 3
void Simple(int n) {
    if (n < 2) {
        cout << n << " — не простое число" << endl;
        return;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << n << " — не простое число" << endl;
            return;
        }
    }
    cout << n << " — простое число" << endl;
}

// Задание 4
void Cube(int n){
    long long cube = 1;
    for (int i = 1; i <= 3; i++) {
        cube *= n;
    }
    cout << cube << " - куб числа " << n << endl;
}

// Задание 5
void Max(int n1, int n2) {
    if (n1 > n2) {
        cout << n1 << " - наибольшее число" << endl;
    }
    else {
        cout << n2 << " - наибольшее число" << endl;
    }
}

// Задание 6
void TrueFalse(int n) {
    if (n > 0) {
        cout << "True";
    }
    else if (n < 0) {
        cout << "False";
    }
    else {
        cout << "Zero";
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    Rectangle(10, 100); //  Задание 1
    Factorial(5); //    Задание 2
    Simple(9); //  Задание 3
    Cube(2); // Задание 4
    Max(10, 100); // Задание 5
    TrueFalse(-6); // Задание 6
}