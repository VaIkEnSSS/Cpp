#include <iostream>

using namespace std;

enum Season { WINTER = 0, SPRING = 1, SUMMER = 2, AUTUMN = 3 };
enum Grade { A = 'a', B = 'b', C = 'c', D = 'd', F = 'f' };
enum Direction { UP = 'w', DOWN = 's', LEFT = 'a', RIGHT = 'd' };
enum OrderStatus { NEW = 0, PAID = 1, SHIPPED = 2, DELIVERED = 3, CANCELLED = 4 };
enum Color { RED = 'r', YELLOW = 'y', GREEN = 'g' };
enum AccessLevel { GUEST = 0, USER = 1, MODERATOR = 2, ADMIN = 3 };

int main12() {
    double meters;
    char code;
    cout << "Задание 12\n\n";
    cout << "Введите число (метры) и код единицы (m, c, d, k, i, f): ";
    cin >> meters >> code;

    switch (code) {
    case 'm':
        cout << meters << " м = " << meters * 1000 << " мм\n\n";
        break;
    case 'c':
        cout << meters << " м = " << meters * 100 << " см\n\n";
        break;
    case 'd':
        cout << meters << " м = " << meters * 10 << " дм\n\n";
        break;
    case 'k':
        cout << meters << " м = " << meters / 1000 << " км\n\n";
        break;
    case 'i':
        cout << meters << " м = " << meters * 39.3701 << " дюймов\n\n";
        break;
    case 'f':
        cout << meters << " м = " << meters * 3.28084 << " футов\n\n";
        break;
    default:
        cout << "Неизвестный код единицы измерения!\n\n";
        break;
    }
    return 0;
}

int main11() {
    int num;
    cout << "Задание 11\n\n";
    cout << "Введите число (0-3): ";
    cin >> num;
    switch (num) {
        case GUEST:
            cout << "Гость: только просмотр\n" << "Права: \n" << "- просмотр сообщений\n\n";
            break;
        case USER:
            cout << "Пользователь: просмотр и редактирование своих данных\n" << "Права: \n" << "- просмотр сообщений\n" << "- редактирование личных данных\n\n";
            break;
        case MODERATOR:
            cout << "Модератор: удаление сообщений, блокировка\n" << "Права: \n" << "- просмотр сообщений\n" << "- редактирование личных данных\n" << "- удаление сообщений\n" << "- блокировка пользователя\n" << "- просмотр жалоб\n\n";
            break;
        case ADMIN:
            cout << "Администратор: полный доступ\n" << "Права: \n" << "- просмотр сообщений\n" << "- редактирование личных данных\n" << "- удаление сообщений\n" << "- блокировка пользователя\n" << "- просмотр жалоб\n" << "- удадление аккаунтов пользователей\n" << "- создание обновления для приложения\n\n";
            break;
        default:
            cout << "Выбран некорректный уровень доступа!\n\n";
            break;
    }
    return 0;
}

int main10() {
    char sym;
    cout << "Задание 10\n\n";
    cout << "Введите символ (r, y, g): ";
    cin >> sym;
    switch (tolower(sym)) {
        case RED:
            cout << "Стоп\n\n";
            break;
        case YELLOW:
            cout << "Приготовиться\n\n";
            break;
        case GREEN:
            cout << "Можно ехать\n\n";
            break;
        default:
            cout << "Введён недопустимый символ!\n\n";
            break;
    }
    return 0;
}

int main9() {
    int num;
    cout << "Задание 9\n\n";
    cout << "Введите число (0-4): ";
    cin >> num;
    switch (num) {
        case NEW:
            cout << "NEW - Заказ создан. Ожидается оплата.\n\n";
            break;
        case PAID:
            cout << "PAID - Оплачен. Готовится к отправке.\n\n";
            break;
        case SHIPPED:
            cout << "SHIPPED - Отправлен. Ожидайте доставку.\n\n";
            break;
        case DELIVERED:
            cout << "DELIVERED - Доставлен. Спасибо за покупку!\n\n";
            break;
        case CANCELLED:
            cout << "CANCELLED - Отменён. Обратитесь в поддержку.\n\n";
            break;
        default:
            cout << "Введён недопустимый статус!\n\n";
            break;
    }
    return 0;
}

int main8() {
    int num;
    cout << "Задание 8\n\n";
    cout << "Введите число (1-10): ";
    cin >> num;
    switch (num) {
        case 1:
            cout << "Римская 1 - I\n\n";
            break;
        case 2:
            cout << "Римская 2 - II\n\n";
            break;
        case 3:
            cout << "Римская 3 - III\n\n";
            break;
        case 4:
            cout << "Римская 4 - IV\n\n";
            break;
        case 5:
            cout << "Римская 5 - V\n\n";
            break;
        case 6:
            cout << "Римская 6 - VI\n\n";
            break;
        case 7:
            cout << "Римская 7 - VII\n\n";
            break;
        case 8:
            cout << "Римская 8 - VIII\n\n";
            break;
        case 9:
            cout << "Римская 9 - IX\n\n";
            break;
        case 10:
            cout << "Римская 10 - X\n\n";
            break;
        default:
            cout << "Введёно недопустимое число!\n\n";
            break;
    }
    return 0;
}

int main7() {
    char sym;
    cout << "Задание 7\n\n";
    cout << "Введите символ (w, s, a, d): ";
    cin >> sym;
    switch (sym) {
        case UP:
            cout << "Смещение по координатам: UP - (0, +1)\n\n";
            break;
        case DOWN:
            cout << "Смещение по координатам: DOWN - (0, -1)\n\n";
            break;
        case LEFT:
            cout << "Смещение по координатам: LEFT - (-1, 0)\n\n";
            break;
        case RIGHT:
            cout << "Смещение по координатам: RIGHT - (+1, 0)\n\n";
            break;
        default:
            cout << "Введён недопустимый символ!\n\n";
            break;
    }
    return 0;
}

int main6() {
    int num;
    cout << "Задание 6\n\n";
    cout << "Введите текущий час времени (0-23): ";
    cin >> num;
    switch (num) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Сейчас ночь\n\n";
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            cout << "Сейчас утро\n\n";
            break;
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
            cout << "Сейчас день\n\n";
            break;
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
            cout << "Сейчас вечер\n\n";
            break;
        default:
            cout << "Ввеён некорректный час!";
            break;
    }
    return 0;
}

int main5() {
    char sym;
    cout << "Задание 5\n\n";
    cout << "Введите оценку (a-f): ";
    cin >> sym;
    switch (sym) {
        case A:
            cout << "A - Отлично(5)\n\n";
            break;
        case B:
            cout << "B - Хорошо (4)\n\n";
            break;
        case C:
            cout << "C - Удовлетворительно (3)\n\n";
            break;
        case D:
            cout << "D - Слабо (2)\n\n";
            break;
        case F:
            cout << "F - Неудовлетворительно (2)\n\n";
            break;
        default:
            cout << "Введён недопустимый символ\n\n";
            break;
    }
    return 0;
}

int main4() {
    int num;
    cout << "Задание 4\n\n";
    cout << "Меню:\n";
    cout << "1. Приветствие\n" << "2. Текущее время\n" << "3. Калькулятор\n" << "4. Выход\n\n";
    cout << "Выберите что-нибудь (1-4): ";
    cin >> num;
    switch (num) {
        case 1:
            cout << "Йоу!\n\n";
            break;
        case 2:
            cout << "Текущее время: 13:27\n\n";
            break;
        case 3:
            cout << "Калькулятор: \n\n";
            cout << "Ой! еще не добавили: \n\n";
            break;
        case 4:
            return 0;
            break;
        default:
            cout << "Введённо недопустимое число!\n\n";
            break;
    }
    return 0;
}

int main3() {
    int num;
    cout << "Задание 3\n\n";
    cout << "Введите числа (0-3): ";
    cin >> num;
    switch (num) {
        case WINTER:
            cout << "Зима, средняя температура -25C\n\n";
            break;
        case SPRING:
            cout << "Весна, средняя температура +5C\n\n";
            break;
        case SUMMER:
            cout << "Лето, средняя температура +25C\n\n";
            break;
        case AUTUMN:
            cout << "Осень, средняя температура -5C\n\n";
            break;
        default:
            cout << "Введено недопустимое число!\n\n";
            break;
    }
    return 0;
}

int main2() {
    char op;
    int num1, num2;
    cout << "Задание 2\n\n";
    cout << "Введите числа и символ: ";
    cin >> num1 >> op >> num2;
    switch (op) {
        case '+':
            cout << num1 + num2 << "\n\n";
            break;
        case '-':
            cout << num1 - num2 << "\n\n";
            break;
        case '/':
            cout << num1 / num2 << "\n\n";
            break;
        case '*':
            cout << num1 * num2 << "\n\n";
            break;
        default:
            cout << "ВВедён недопустимый символ!\n\n";
            break;
    }
    return 0;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int day;
    cout << "Задание 1\n\n";
    cout << "Введите число номера дня недели (1-7): ";
    cin >> day;
    switch (day) {
        case 1:
            cout << "Понедельник\n\n";
            break;
        case 2:
            cout << "Вторник\n\n";
            break;
        case 3:
            cout << "Среда\n\n";
            break;
        case 4:
            cout << "Четверг\n\n";
            break;
        case 5:
            cout << "Пятница\n\n";
            break;
        case 6:
            cout << "Суббота\n\n";
            break;
        case 7:
            cout << "Воскресенье\n\n";
            break;
        default:
            cout << "Некорректный день недели!\n\n";
            break;
    }
    main2();
    main3();
    main4();
    main5();
    main6();
    main7();
    main8();
    main9();
    main10();
    main11();
    main12();
    return 0;
}