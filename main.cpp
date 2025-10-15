#include <string>
#include <iostream>
using namespace std;

string encrypt(int kluch, string slovo){
    for (int i = 0; i <= slovo.size(); i = i + 1) { //проходимся по каждому символу слова
        if (slovo[i] + kluch <= 'z' and slovo[i] >= 'a') {
            slovo[i] = slovo[i] + kluch;
        } else if (slovo[i] + kluch > 'z' and slovo[i] >= 'a'){ //если при смещении буквы она доходит до конца алфавита перемещаем её в начало
            slovo[i] = slovo[i] + kluch - 26;
        }
    }
    return slovo;
}

string decrypt(int kluch, string slovo) {
    for (int i = 0; i <= slovo.size(); i = i + 1) {
        if (slovo[i] - kluch >= 'a' and slovo[i] <= 'z') {
            slovo[i] = slovo[i] - kluch;
        } else if (slovo[i] - kluch < 'a' and slovo[i] <= 'z') {
            slovo[i] = slovo[i] - kluch + 26;
        }
    }
    return slovo;
}

int main() {
    int n = 0;
    std::cin >> n;
    n = n % 26; //на случай если смещение больше чем букв в алфавите (например если смещение равно 29, то это то же самое что смещение на 3)
    string s = "hello";
    cin >> s;
    std::cout << encrypt(n, s) << std::endl;
    std::cout << decrypt(n, s) << std::endl;
    return 0;
}