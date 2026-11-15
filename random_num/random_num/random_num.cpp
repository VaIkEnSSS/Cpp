#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main4() {
    srand(time(NULL));
    const int size = 10;
    double array[size];
    for (int i = 0; i < size; i++) {
        array[i] = -50 + (100.0 * rand()) / RAND_MAX;
        cout << array[i] << ' ';
    }
    cout << "\n";
    double sum_negative = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            sum_negative += array[i];
        }
    }
    cout << "1) Сумма отрицательных элементов: " << sum_negative << "\n";
    int minidx = 0;
    int maxidx = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] < array[minidx]) minidx = i;
        if (array[i] > array[maxidx]) maxidx = i;
    }
    int left, right;
    if (minidx < maxidx) { 
        left = minidx; right = maxidx; 
    }
    else { 
        left = maxidx; right = minidx; 
    }
    double product_between = 1;
    for (int i = left + 1; i < right; i++) {
        product_between *= array[i];
    }
    cout << "2) Произведение между min и max: " << product_between << "\n";
    double product_even = 1;
    for (int i = 1; i < size; i += 2) {
        product_even *= array[i];
    }
    cout << "3) Произведение элементов с чётными номерами: " << product_even << "\n";
    int first_heg = -1;
    int last_neg = -1;
    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            if (first_heg == -1) first_heg = i;
                last_neg = i;
        }
    }
    double sum_between_neg = 0;
    for (int i = first_heg + 1; i < last_neg; i++) {
        sum_between_neg += array[i];
    }
    cout << "4) Сумма между первым и последним отрицательными: " << sum_between_neg;
    return 0;
}

int main3() {
    const int size = 12;
    double profit[size];
	cout << "Введите прибыль для каждого из 12 месяцев: \n";
    for (int i = 0; i < size; i++) {
        cout << "Месяц " << i + 1 << ": ";
        cin >> profit[i];
    }
    int start, end;
    cout << "Введите начало диапазона (1-12): ";
    cin >> start;
    cout << "Введите конец диапазона (1-12): ";
    cin >> end;
    int startidx = start - 1;
    int endidx = end - 1;
    int maxidx = startidx;
    int minidx = startidx;
    for (int i = startidx + 1; i <= endidx; i++) {
        if (profit[i] > profit[maxidx]) maxidx = i;
        if (profit[i] < profit[minidx]) minidx = i;
    }
    cout << "Максимальная прибыль: " << profit[maxidx]
        << " (месяц " << maxidx + 1 << ")\n";
    cout << "Минимальная прибыль: " << profit[minidx]
        << " (месяц " << minidx + 1 << ")\n";
    return 0;
}

int main2() {
    srand(time(NULL));
    const int size = 10;
    int array[size];
    int range;
    int comparison;
    int summ = 0;
    cout << "Введите диапазон чисел: ";
    cin >> range;
    cout << "Введите число для сравнения: ";
    cin >> comparison;
    for (int i = 0; i < size; i++) {
        array[i] = rand() % range;
        cout << array[i] << ' ';
        if (array[i] < comparison) summ += array[i];
    }
    cout << "\nСумма элементов, меньших " << comparison << " = " << summ << "\n";
    return 0;
}

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    const int size = 10;
    int array[size];
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
        cout << array[i] << ' ';
    }
    int max = array[0];
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) max = array[i];
        if (array[i] < min) min = array[i];
    }
    cout << "\nМаксимальное: " << max << "\n";
    cout << "Минимальное: " << min << "\n";
    main2();
    main3();
    main4();
    return 0;
}