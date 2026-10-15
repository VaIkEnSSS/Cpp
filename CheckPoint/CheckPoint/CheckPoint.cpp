#include <iostream>
#include <string>

using namespace std;

// 9. Тернарный FizzBuzz
int main3() { int n; cout << "Введите число: "; cin >> n; cout << (n % 15 == 0 ? "FizzBuzz" : n % 3 == 0 ? "Fizz" : n % 5 == 0 ? "Buzz" : to_string(n)); return 0; }


// 3. Битовая маска прав доступа
int main2() {
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

// 1. Идентификация магического числа
int main(){
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
                            if (end_inp == 42){
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
    return 0;
    }