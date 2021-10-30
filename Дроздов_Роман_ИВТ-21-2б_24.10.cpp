#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int random_num, user_num;
    int count = 1;
    bool Flag = true;
    setlocale(LC_ALL, "Rus");

    srand (time(NULL));
    random_num = rand() % 100 + 1;

    cout << "Угадайте загаданное число от 1 до 100" << "\n";
    cout << "=========================" << "\n";

        if (count <= 7){
            while (Flag == true){
            cout <<"Попытка № " << count << "\n";
            cin >> user_num;
            if (user_num > random_num){
                cout << "Загаданное число меньше введенного" << "\n";
                cout << "=========================" << "\n";
                count++;
            }

            if (user_num < random_num){
                cout << "Загадное число больше введенного" << "\n";
                cout << "=========================" << "\n";
                count++;
            }

            if (user_num == random_num){
                Flag = false;
            }

        }
    }

    if (Flag == true){
        cout << "К сожалению, вы не угадали введенное число." << "\n";
        cout << "Изначально загадонное слово - " << random_num;
    }
    else
    {
        cout << "Вы верно угадали веденное число. Поздравляем!" << "\n";
        cout << "Изначально загадонное слово - " << random_num;
    }

    return 0;
}