#include <iostream>

using namespace std;

// Задание 5
int main5() {
    int month, start_day;
    cout << "Введите месяц номера: (1-12): ";
    cin >> month;
    cout << "Введите номер дня недели (1-7), когда начался этот месяц: ";
    cin >> start_day;
    int days_in_month;
    switch (month) {
    case 2:
        days_in_month = 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days_in_month = 30;
        break;
    default:
        days_in_month = 31;
        break;
    }
    cout << "\n\t";
    switch (month) {
    case 1:  cout << "Январь";   break;
    case 2:  cout << "Февраль";  break;
    case 3:  cout << "Март";     break;
    case 4:  cout << "Апрель";     break;
    case 5:  cout << "Май";       break;
    case 6:  cout << "Июнь";      break;
    case 7:  cout << "Июль";      break;
    case 8:  cout << "Август";    break;
    case 9:  cout << "Сентябрь"; break;
    case 10: cout << "Октябрь";   break;
    case 11: cout << "Ноябрь";  break;
    case 12: cout << "Декабрь";  break;
    }
    cout << "\n\n";

    cout << " Пн  Вт  Ср  Чт  Пт  Сб  Вс\n";
    for (int i = 1; i < start_day; i++) {
        cout << "    ";
    }

    int weekends_count = 0;
    int current_day_of_week = start_day;
    for (int day = 1; day <= days_in_month; day++) {
        if (day < 10) cout << "  " << day << " ";
        else cout << " " << day << " ";
        if (current_day_of_week == 6 || current_day_of_week == 7) {
            weekends_count++;
        }
        if (current_day_of_week == 7) {
            cout << "\n";
            current_day_of_week = 1;
        }
        else {
            current_day_of_week++;
        }
    }
    if (current_day_of_week != 1) cout << "\n";
    cout << "\nВыходных в этом месяце: " << weekends_count << "\n";

    return 0;
}

// Задание 4
int main4() {
    int decision, eagle = 0;
    for (int i = 1; i <= 9; i++) {
        cout << "Бросок номер: " << i << ": ";
        cin >> decision;
        eagle += decision;
    }
    if (eagle % 2 == 0) {
        cout << "Решение положительное\n\n";
    }
    else {
        cout << "Решение отрицательное\n\n";
    }
    return 0;
}
// Задание 3
int main3() {
    int n, distance = 15, summ = 0;
    cout << "Введите количество дней которые ползла улитка: ";
    cin >> n;
    for (; n != 0; n--) {
        summ += distance;
        distance += 2;
    }
    cout << "За всё время улитка проползла: " << summ << "\n\n";
    return 0;
}

// Задание 2
int main2() {
    int num, summ = 0;
    cin >> num;
    for (; num > 0; num /= 10) {
        summ += num % 10;
    }
    cout << "Сумма цифр числа равна: " << summ << "\n\n";
    return 0;
    
}
// Задание 1
int main(){
    setlocale(LC_ALL, "Russian");
    int num;
    cin >> num;
    for (; num > 0; num /= 10) {
        cout << num % 10;
    }
    cout << "\n\n";
    main2();
    main3();
    main4();
    main5();
    return 0;
}