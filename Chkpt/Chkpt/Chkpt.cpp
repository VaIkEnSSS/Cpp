#include <iostream>
#include <string>

using namespace std;

// Банкомат
int main6() {
	int choose;
	double balance = 10000;
	double amount;
	while (true) {
		cout << "=== БАНКОМАТ ===" << endl;
		cout << "1. Проверить баланс" << endl;
		cout << "2. Снять наличные" << endl;
		cout << "3. Пополнить счёт" << endl;
		cout << "4. Выход" << endl;
		cout << "Выберите пункт: ";
		cin >> choose;
		switch (choose) {
		case 1:
			cout << "Ваш баланс: " << balance << endl;
			break;
		case 2:
			cout << "Введите сумму: ";
			cin >> amount;
			if (amount <= 0) {
				cout << "Ошибка: сумма должна быть положительной" << endl;
			}
			else if (int(amount) % 100 != 0) {
				cout << "Ошибка: сумма должна быть кратна 100" << endl;
			}
			else if (amount > balance) {
				cout << "Ошибка: недостаточно средств" << endl;
			}
			else {
				balance -= amount;
				cout << "Выдано " << amount << ". Остаток: " << balance << endl;
			}
			break;
		case 3:
			cout << "Введите сумму пополнения: ";
			cin >> amount;
			if (amount <= 0) {
				cout << "Ошибка: сумма должна быть положительной" << endl;
			}
			else {
				balance += amount;
				cout << "Счёт пополнен на " << amount << ". Баланс: " << balance << endl;
			}
			break;
		case 4:
			cout << "До свидания!" << endl;
			cout << "Итоговый баланс: " << balance << endl;
			return 0;

		default:
			cout << "Неверный ввод" << endl;
			break;
		}
	}
	return 0;
}

// Вложенные циклы
int main5() {
	int N;
	cout << "Введите N: ";
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

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

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cout << i * j << "\t";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << (((i + j) % 2 == 0) ? '#' : '.');
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}

// Циклы
int main4(){
	int N;
	cout << "Введите N: ";
	cin >> N;
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		sum += i;
	}
	cout << "Сумма 1.." << N << " = " << sum << endl;

	int fact = 1;
	int i = 1;
	while (i <= N) {
		fact *= i;
		i++;
	}
	cout << "Факториал " << N << " = " << fact << endl;

	cout << "Чётные: ";
	int j = 1;
	do {
		if (j % 2 == 0) {
			cout << j << " ";
		}
		j++;
	} 
	while (j <= N);
	cout << endl;

	bool prime = (N >= 2);
	for (int d = 2; d * d <= N; d++) {
		if (N % d == 0) {
			prime = false;
			break;
		}
	}
	if (prime) {
		cout << N << " – простое число" << endl;
	}
	else {
		cout << N << " – не простое число" << endl;
	}
	return 0;
}

// Switch-case
int main3(){
	int summ, currency;
	cout << "Введите сумму: ";
	cin >> summ;
	cout << "1 - USD (доллар) = 92.5 руб." << endl;
	cout << "2 - EUR (евро) = 100.3 руб." << endl;
	cout << "3 - CNY (юань) = 12.8 руб." << endl;
	cout << "4 - KZT (тенге) = 0.20 руб." << endl;
	cout << "Выберите валюту: ";
	cin >> currency;
	switch (currency) {
	case 1: cout << summ << " руб. = " << summ / 92.5 << " USD" << " Популярная валюта" << endl; break;
	case 2: cout << summ << " руб. = " << summ / 100.3 << " EUR" << " Популярная валюта" << endl; break;
	case 3: cout << summ << " руб. = " << summ / 12.8 << " CNY" << endl; break;
	case 4: cout << summ << " руб. = " << summ / 0.20 << " KZT" << endl; break;
	default: cout << "Ошибка: выбрана неверная валюта" << endl; break;
	}
	return 0;
}

// Условные конструкции
int main2(){
	int score;
	cout << "Введите ваш балл: ";
	cin >> score;
	if (score >= 90 && score <= 100) {
		cout << "Отлично (5)" << endl;
		cout << "Зачёт получен" << endl;
	}
	else if (score >= 75 && score <= 89) {
		cout << "Хорошо (4)" << endl;
		cout << "Зачёт получен" << endl;
	}
	else if (score >= 60 && score <= 74) {
		cout << "Удовлетворительно (3)" << endl;
		cout << "Зачёт получен" << endl;
	}
	else if (score >= 0 && score <= 59) {
		cout << "Неудовлетворительно (2)" << endl;
		cout << "Зачёт не получен" << endl;
	}
	else {
		cout << "Ошибка: балл должен быть в диапазоне от 0 до 100" << endl;
	}
	return 0;
}

// Типы данных и переменные
int main(){
	setlocale(LC_ALL, "Russian");
	string name;
	int age;
	double height;
	char letter;
	bool ex_student;
	cout << "Введите ваше имя: ";
	cin >> name;
	cout << "Введите ваш возраст: ";
	cin >> age;
	cout << "Введите ваш рост: ";
	cin >> height;
	cout << "Введите вашу первую букву имени: ";
	cin >> letter;
	cout << "Вы отличник? (1 - да, 0 - нет): ";
	cin >> ex_student;
	cout << "Имя: " << name << endl;
	cout << "Возраст: " << age << endl;
	cout << "Год рождения: " << 2026 - age << endl;
	cout << "Рост: " << height << " м" << "(" << height * 100 << " см)" << endl;
	cout << "Первая буква имени: " << letter << endl;
	cout << "Отличник: " << ex_student << endl;
	cout << "Размер int: " << sizeof(int) << " байт" << endl;
	cout << "Размер string: " << sizeof(string) << " байт" << endl;
	cout << "Размер double: " << sizeof(double) << " байт" << endl;
	cout << "Размер char: " << sizeof(char) << " байт" << endl;
	cout << "Размер bool: " << sizeof(bool) << " байт" << endl;
	main2();
	main3();
	main4();
	main5();
	main6();
	return 0;
}