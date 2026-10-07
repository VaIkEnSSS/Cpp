#include <iostream>

using namespace std;

int main2() {
    float base = 200, bonus = 200, sales1, sales2, sales3, salary1, salary2, salary3, percent1, percent2, percent3;
    cout << "Задание 2\n\n";
    cout << "Введите уровень продаж первого менеджера: ";
    cin >> sales1;
    cout << "Введите уровень продаж второго менеджера: ";
    cin >> sales2;
    cout << "Введите уровень продаж тертьего менеджера: ";
    cin >> sales3;
    if (sales1 < 500) {
        percent1 = 0.03;
    }
    else if (sales1 < 1000) {
        percent1 = 0.05;
    }
    else {
        percent1 = 0.08;
    }
    salary1 = base + sales1 * percent1;
    if (sales2 < 500) {
        percent2 = 0.03;
    }
    else if (sales2 < 1000) {
        percent2 = 0.05;
    }
    else {
        percent2 = 0.08;
    }
    salary2 = base + sales2 * percent2;
    if (sales3 < 500) {
        percent3 = 0.03;
    }
    else if (sales3 < 1000) {
        percent3 = 0.05;
    }
    else {
        percent3 = 0.08;
    }
    salary3 = base + sales3 * percent3;
    int best = 1;
    if (sales2 > sales1 && sales2 > sales3) {
        best = 2;
    }
    else if (sales3 > sales1 && sales3 > sales2) {
        best = 3;
    }
    if (best == 1) {
        salary1 = salary1 + bonus;
    }
    else if (best == 2) {
        salary2 = salary2 + bonus;
    }
    else {
        salary3 = salary3 + bonus;
    }
    cout << "Результаты:\n";
    cout << "Менеджер 1: продажи = " << sales1 << "$, процент = " << percent1 * 100 << "%" << ", зарплата = " << salary1 << "$\n";
    cout << "Менеджер 2: продажи = " << sales2 << "$, процент = " << percent2 * 100 << "%" << ", зарплата = " << salary2 << "$\n";
    cout << "Менеджер 3: продажи = " << sales3 << "$, процент = " << percent3 * 100 << "%" << ", зарплата = " << salary3 << "$\n";
    cout << "Лучший менеджер: " << best << "\n" << "Премия +" << bonus << "$\n";
    return 0;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    float paid_pizza, free_pizza, code, count, discount, margherita_ID = 1, margherita_price = 10.25, pepperoni_ID = 2, pepperoni_price = 9.85,
        four_cheeses_ID = 3, four_cheeses_price = 11.45, marinara_ID = 4, marinara_price = 12.10,
        cola_ID = 5, cola_price = 1.5, sprite_ID = 6, sprite_price = 2.5, fanta_ID = 7, fanta_price = 3.5,
        pizza_check, drink_check, total_check;
    cout << "Задание 1\n";
    cout << "Прайс лист пиццерии: \n";
    cout << "Блюда: \n";
    cout << "Маргарита - " << margherita_price << "$ " << "Код - " << margherita_ID << "\n";
    cout << "Пепперони - " << pepperoni_price << "$ " << "Код - " << pepperoni_ID << "\n";
    cout << "Четыре сыра - " << four_cheeses_price << "$ " << "Код - " << four_cheeses_ID << "\n";
    cout << "Маринара - " << marinara_price << "$ " << "Код - " << marinara_ID << "\n";
    cout << "Напитки: \n";
    cout << "Кола - " << cola_price << "$ " << "Код - " << cola_ID << "\n";
    cout << "Спрайт - " << sprite_price << "$ " << "Код - " << sprite_ID << "\n";
    cout << "Фанта - " << fanta_price << "$ " << "Код - " << fanta_ID << "\n\n";
    cout << "Введите код: ";
    cin >> code;
    cout << "Введите количество: ";
    cin >> count;
    if (code == 1) {
        int free_pizza = (int)count / 5;
        int paid_pizza = count - free_pizza;
        pizza_check = margherita_price * paid_pizza;
        cout << "Бесплатных пицц: " << free_pizza << "\n";
        if (pizza_check > 50) {
            discount = pizza_check * 0.20;
            total_check = pizza_check - discount;
            cout << "Скидка 20%: " << discount << "$\n";
        }
        else {
            total_check = pizza_check;
        }
        cout << "Маргарита - " << count << " штук(а)\n" << "Цена: " << margherita_price << "\n" << "Итого к оплате: " << total_check << "$\n";
    }
    else if (code == 2) {
        int free_pizza = (int)count / 5;
        int paid_pizza = count - free_pizza;
        pizza_check = pepperoni_price * paid_pizza;
        cout << "Бесплатных пицц: " << free_pizza << "\n";
        if (pizza_check > 50) {
            discount = pizza_check * 0.20;
            total_check = pizza_check - discount;
            cout << "Скидка 20%: " << discount << "$\n";
        }
        else {
            total_check = pizza_check;
        }
        cout << "Пепперони - " << count << " штук(а)\n" << "Цена: " << pepperoni_price << "\n" << "Итого к оплате: " << total_check << "$\n";
    }
    else if (code == 3) {
        int free_pizza = (int)count / 5;
        int paid_pizza = count - free_pizza;
        pizza_check = four_cheeses_price * paid_pizza;
        cout << "Бесплатных пицц: " << free_pizza << "\n";
        if (pizza_check > 50) {
            discount = pizza_check * 0.20;
            total_check = pizza_check - discount;
            cout << "Скидка 20%: " << discount << "$\n";
        }
        else {
            total_check = pizza_check;
        }
        cout << "Четыре сыра - " << count << " штук(а)\n" << "Цена: " << four_cheeses_price << "\n" << "Итого к оплате: " << total_check << "$\n";
    }
    else if (code == 4) {
        int free_pizza = (int)count / 5;
        int paid_pizza = count - free_pizza;
        pizza_check = marinara_price * paid_pizza;
        cout << "Бесплатных пицц: " << free_pizza << "\n";
        if (pizza_check > 50) {
            discount = pizza_check * 0.20;
            total_check = pizza_check - discount;
            cout << "Скидка 20%: " << discount << "$\n";
        }
        else {
            total_check = pizza_check;
        }
        cout << "Маринара - " << count << " штук(а)\n" << "Цена: " << marinara_price << "\n" << "Итого к оплате: " << total_check << "$\n";
    }
    else if (code == 5) {
        drink_check = cola_price * count;
        total_check = drink_check;
        cout << "Кола - " << count << " штук(а)\n" << "Цена: " << cola_price << "\n" << "Итого к оплате: " << total_check << "$\n";
    }
    else if (code == 6 && count > 3) {
        drink_check = sprite_price * count;
        discount = drink_check * 0.15;
        total_check = drink_check * discount;
        cout << "Скидка 15%: " << discount << "$\n";
        cout << "Спрайт - " << count << " штук(а)\n" << "Цена: " << sprite_price << "\n" << "Итого к оплате : " << total_check << "$\n";
    }
    else if (code == 7 && count > 3) {
        drink_check = fanta_price * count;
        discount = drink_check * 0.15;
        total_check = drink_check * discount;
        cout << "Скидка 15%: " << discount << "$\n";
        cout << "Фанта - " << count << " штук(а)\n" << "Цена: " << fanta_price << "\n" << "Итого к оплате : " << total_check << "$\n";
    }
    main2();
    return 0;
}