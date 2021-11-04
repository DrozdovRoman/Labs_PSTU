#include <iostream>
using namespace std;

int main() {
    char a[5]; // создаем массив состоящий из 5 элементов
    for (int i = 0 ; i < 5 ; i++ ) {
        cout << "Введите символ:" << "\n";
        cin >> a[i]; // запрашиваем у пользователя символ
    }
    for (int i = 4; i > -1 ; i--) { // выводим элементы в обратном порядке их индексов
        cout << a[i];
    }

    return 0;
}
