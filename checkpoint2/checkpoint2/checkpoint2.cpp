#include <iostream>
#include <string>

using namespace std;

// 12. Конструктор булевой функции
int main12() {
    int A, B, C, f;
    cout << "Введите A B C (0/1) и номер функции (0-7): ";
    cin >> A >> B >> C >> f;
    bool a = A, b = B, c = C;
    int res = 0;
    switch (f) {
        case 0: 
            res = 0; 
            break;
        case 1: 
            res = (a && b && c); 
            break;
        case 2: 
            res = (a && b && !c); 
            break;
        case 3: 
            res = (a && b); 
            break;
        case 4: 
            res = (!a && !b && !c); 
            break;
        case 5: 
            res = (a || b); 
            break;
        case 6: 
            res = (a ^ b); 
            break;
        case 7: 
            res = (a || b || c); 
            break;
        default: cout << "Неверный номер\n"; 
            return 1;
    }
    cout << "Результат: " << res;
    return 0;
}

// 10. Оптимизатор тарифа связи
int main10() {
    int min, gb, sms;
    cout << "Минуты ГБ SMS: ";
    cin >> min >> gb >> sms;
    double cost1 = 300 + (min > 100 ? (min - 100) * 2.0 : 0) + (gb > 5 ? (gb - 5) * 100.0 : 0) + (sms > 50 ? (sms - 50) * 1.0 : 0);
    double cost2 = 500 + (min > 300 ? (min - 300) * 1.5 : 0) + (gb > 10 ? (gb - 10) * 80.0 : 0) + (sms > 100 ? (sms - 100) * 0.5 : 0);
    double cost3 = 800 + (min > 500 ? (min - 500) * 1.0 : 0) + (gb > 20 ? (gb - 20) * 50.0 : 0) + (sms > 200 ? (sms - 200) * 0.3 : 0);
    double best = cost1;
    int bestNum = 1;

    if (cost2 < best) { 
        best = cost2; bestNum = 2;
    }
    if (cost3 < best) { 
        best = cost3; bestNum = 3;
    }
    cout << "Самый дешёвый: тариф " << bestNum << ", стоимость " << best << "\n";
    return 0;
}

// 9. Тернарный FizzBuzz
int main9() { int n; cout << "Введите число: "; cin >> n; cout << (n % 15 == 0 ? "FizzBuzz" : n % 3 == 0 ? "Fizz" : n % 5 == 0 ? "Buzz" : to_string(n)); return 0; }

// 6. Принадлежность точки N-угольнику (N=3, 4, 5)
int main6() {
    double x, y, cx, cy, R;
    int fig;
    cout << "Точка x y: ";
    cin >> x >> y;
    cout << "Фигура (1, 2, 3): ";
    cin >> fig;
    cout << "Центр cx cy и радиус R: ";
    cin >> cx >> cy >> R;
    double dx = x - cx;
    double dy = y - cy;
    double dist = sqrt(dx * dx + dy * dy);
    bool inside = false;

    if (fig == 1) {
        inside = (dist < R * 0.5);
    }
    else if (fig == 2) {
        double half = R / sqrt(2.0);
        inside = (fabs(dx) < half && fabs(dy) < half);
    }
    else if (fig == 3) {
        inside = (dist < R * 0.85);
    }
    else {
        cout << "Неверная фигура\n";
        return 1;
    }
    cout << (inside ? "Точка внутри\n" : "Точка снаружи\n");
    return 0;
}

// 5. Валидатор сложного пароля
int main5() {
    string password;
    
    cout << "Введите пароль: ";
    cin >> password;
    
    if (password.size() >= 8 && password.size() <= 12) {
        
        if (password.find_first_of("0123456789") != string::npos) {
            
            if (password.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") != string::npos) {
                
                if (password.find_first_of("abcdefghijklmnopqrstuvwxyz") != string::npos) {
                    cout << "Пароль валиден\n";
                }
                else {
                    cout << "Пароль не валиден\n";
                    cout << "Ошибка: нет строчной\n";
                }
            }
            
            else {
                cout << "Пароль не валиден\n";
                cout << "Ошибка: нет заглавной\n";
            }
        }
        
        else {
            cout << "Пароль не валиден\n";
            cout << "Ошибка: нет цифры\n";
        }
    }
    
    else {
        cout << "Пароль не валиден\n";
        cout << "Ошибка: длина не 8-12\n";
    }
    return 0;
}

// 4. Определение типа шахматной клетки
int main4() {
    char liter, num;
    bool edge_row, edge_col;

    cout << "Введите клетку: ";
    cin >> liter >> num;

    if (liter == 'a') {
        if (num % 2 == 0) {
            cout << "Цвет: белая\n";
        }
        else {
            cout << "Цвет: чёрная\n";
        }
    }
    else if (liter == 'b') {
        if (num % 2 == 0) {
            cout << "Цвет: чёрная\n";
        }
        else { 
            cout << "Цвет: белая\n"; 
        }
    }
    else if (liter == 'c') {
        if (num % 2 == 0) {
            cout << "Цвет: белая\n";
        }
        else { 
            cout << "Цвет: чёрная\n"; 
        }
    }
    else if (liter == 'd') {
        if (num % 2 == 0) { 
            cout << "Цвет: чёрная\n"; 
        }
        else {
            cout << "Цвет: белая\n";
        }
    }
    else if (liter == 'e') {
        if (num % 2 == 0) {
            cout << "Цвет: белая\n";
        }
        else {
            cout << "Цвет: чёрная\n";
        }
    }
    else if (liter == 'f') {
        if (num % 2 == 0) {
            cout << "Цвет: чёрная\n";
        }
        else { 
            cout << "Цвет: белая\n"; 
        }
    }
    else if (liter == 'g') {
        if (num % 2 == 0) {
            cout << "Цвет: белая\n";
        }
        else {
            cout << "Цвет: чёрная\n";
        }
    }
    else if (liter == 'h') {
        if (num % 2 == 0) { 
            cout << "Цвет: чёрная\n"; 
        }
        else {
            cout << "Цвет: белая\n";
        }
    }
    else {
        cout << "Ошибка: неверная буква\n";
    }

    edge_row = (num == '1' || num == '8');
    edge_col = (liter == 'a' || liter == 'h');

    if (edge_row && edge_col) {
        cout << "Тип: угловая\n";
    }
    else if (edge_row || edge_col) {
        cout << "Тип: боковая\n";
    }
    else {
        cout << "Тип: центральная\n";
    }
    return 0;
}

// 3. Битовая маска прав доступа
int main3() {
    int rules;
    cout << "Введите число от 0 до 15: ";
    cin >> rules;
    cout << "Чтение: ";
    if (rules & 4) {
        cout << "Да\n";
    }
    else {
        cout << "Нет\n";
    }
    cout << "Запись: ";
    if (rules & 2) {
        cout << "Да\n";
    }
    else {
        cout << "Нет\n";
    }
    cout << "Исполнение: ";
    if (rules & 1) {
        cout << "Да\n";
    }
    else {
        cout << "Нет\n";
    }
    cout << "Удаление: ";
    if (rules & 8) {
        cout << "Да\n";
    }
    else {
        cout << "Нет\n";
    }
    
    return 0;
}

// 2. Тернарный калькулятор флагов
int main2() {
    int n1, n2, n3, max_n, flag;
    
    cout << "Введите первое число: ";
    cin >> n1;
    cout << "Введите второе число: ";
    cin >> n2;
    cout << "Введите третье число: ";
    cin >> n3;
    max_n = n1 > n2 ? n1 : n2;
    max_n = max_n > n3 ? max_n : n3;
    cout << "Максимальное число: " << max_n << "\n";
    
    n1 >= 0 ? n1 = n1 : n1 = 0;
    n2 >= 0 ? n2 = n2 : n2 = 0;
    n3 >= 0 ? n3 = n3 : n3 = 0;
    cout << "Сумма чисел: " << n1 + n2 + n3 << "\n";
    
    ((n1 == n2) && (n2 == n3) && (n1 == n3)) ? flag = 1 : flag = 0;
    cout << "Являются ли сторонами равностороннего треугольника: " << flag << "\n\n";
    return 0;
}


// 1. Идентификация магического числа
int main() {
    int question1, question2, question3, any_more_question, last_question;
    int inp, end_inp;
    const int number = 42;
    
    setlocale(LC_ALL, "Russian");
    cout << "Введите число: ";
    cin >> inp;
    
    if (inp != 42) {
        cout << "неверно!\n";
        cout << "Вы можете задать 3 вопроса\n";
        cout << "Допустимые вопросы:\n 1. делится на 3?\n 2. больше 50?\n 3. больше 40?\n";
        cout << "Введите цифру вопроса: ";
        cin >> question1;

        if (question1 == 1) {
            cout << "Да\n";
            cout << "Ещё один вопрос? да(1)/нет(0): ";
            cin >> any_more_question;

            if (any_more_question == 1) {
                cin >> question2;
                if (question2 == 2) {
                    cout << "Нет\n";
                    cout << "Последний вопрос? да(1)/нет(0): ";
                    cin >> last_question;

                    if (last_question == 1) {
                        cin >> question3;
                        if (question3 == 3) {
                            cout << "Да\n";
                            cout << "Введите окончательный ответ: ";
                            cin >> end_inp;
                            if (end_inp == 42) {
                                cout << "Угадал, число равно 42\n";
                            }
                        }
                        else {
                            cout << "недопустимый вопрос!\n";
                        }
                    }
                    else if (last_question == 0) {
                        cout << "Введите окончательный ответ: ";
                        cin >> end_inp;
                        if (end_inp == 42) {
                            cout << "Угадал, число равно 42\n";
                        }
                    }
                }
                else {
                    cout << "недопустимый вопрос!\n";
                }
            }
            else if (any_more_question == 0) {
                cout << "Введите окончательный ответ: ";
                cin >> end_inp;
                if (end_inp == 42) {
                    cout << "Угадал, число равно 42\n";
                }

            }
        }
        else {
            cout << "недопустимый вопрос!\n";
        }
    }
    else {
        cout << "Угадал\n";
    }
    main2();
    main3();
    main4();
    main5();
    main6();
    main9();
    main10();
    main12();
    return 0;
}