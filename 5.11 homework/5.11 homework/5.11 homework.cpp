#include <iostream>

using namespace std;

int main2() {
	int N;
    cout << "Введите половину высоты ромба N: ";
    cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N - i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = N - 1; i >= 1; i--) {
		for (int j = 1; j <= N - i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int level;
    int max_number;
    int table_count;
    cout << "Выберите уровень:" << endl;
    cout << "1 - легко" << endl;
    cout << "2 - средне" << endl;
    cout << "3 - сложно" << endl;
    cout << "Ваш выбор: ";
    cin >> level;
    if (level == 1) {
        max_number = 5;
        table_count = 3;
    }
    else if (level == 2) {
        max_number = 10;
        table_count = 5;
    }
    else {
        max_number = 15;
        table_count = 7;
    }

    int correct_count = 0;
    int user_answer;
    for (int i = 1; i <= table_count; i++) {
        int current_number = i;
        cout << "Таблица для числа: " << current_number << endl;
        for (int j = 1; j <= max_number; j++) {
            int first_factor = current_number;
            int second_factor = j;
            cout << "Сколько будет: " << first_factor << " * " << second_factor << " ? ";
            cin >> user_answer;
            if (user_answer == first_factor * second_factor) {
                cout << "Верно" << endl;
                correct_count = correct_count + 1;
            }
            else {
                cout << "Нет, правильно: " << first_factor * second_factor << endl;
            }
        }
    }

    int total_questions = table_count * max_number;
    cout << endl;
    cout << "Вы правильно ответили на: " << correct_count << " из " << total_questions << endl;
    if (correct_count == total_questions) {
        cout << "Оценка: 5" << endl;
    }
    else if (correct_count * 2 >= total_questions) {
        cout << "Оценка: 4" << endl;
    }
    else if (correct_count * 3 >= total_questions) {
        cout << "Оценка: 3" << endl;
    }
    else {
        cout << "Оценка: 2" << endl;
    }
    main2();
    return 0;
}