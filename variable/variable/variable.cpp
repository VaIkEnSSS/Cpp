# include <iostream>

using namespace std;

int main5() {
	cout << "Task 5\n";
	double dep, percent, payment;
	cout << "Введите сумму денежного вклада в евро: ";
	cin >> dep;
	cout << "Введите процент годовых: ";
	cin >> percent;
	payment = dep * (percent / 100) / 12;
	cout << "Сумма выплачиваемая банком : " << payment;

	return 0;
}

int main4() {
	float speed, time, distance;
	int min, sec;
	cout << "Task 4\n";
	cout << "Вычисление скорости бега\n";
	cout << "Введите дистанцию: ";
	cin >> distance;
	cout << "Введите время: "; 
	cin >> time;
	min = time;
	sec = (time - min) * 100;
	time = (min * 60) + sec;
	cout << "Дистанция: " << distance << "\n";
	cout << "Время: " << min << " Минуты " << sec << " Секунд" << "\n";
	cout << "Скорость с которой вы бежали: " << distance / time * 3.6 << " Км/ч" << "\n";
	return 0;
}

int main3() {
	cout << "Task 3\n";
	cout << "Введите количество дней: ";
	int week, day;
	cin >> day;
	week = day / 7;
	day = day % 7;
	cout << "Недели: " << week << "\n";
	cout << "Дни: " << day << "\n\n";
	return 0;
}

int main2() {
	cout << "Task 2\n";
	float num;
	int dollar, cent;
	cout << "Ваши деньги: ";
	cin >> num;
	dollar = num;
	cent = ((num - dollar) * 100) + 0.1;
	cout << "Доллары: " << dollar << "\n";
	cout << "Центы: " << cent << "\n\n";
	return 0;
}

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Task 1\n";
	cout << "Введите число: ";
	float number;
	cin >> number;
	cout << "Время в часах: " << number / 60 / 60 << "\n";
	cout << "Время в минутах: " << number / 60 << "\n";
	cout << "Время в секундах: " << number << "\n\n";

	main2();
	main3();
	main4();
	main5();
	return 0;
}