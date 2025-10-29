#include <string>
#include <iostream>
using namespace std;

void funcB(string data, string key) {
    string data2((data.length()), ' ');
    for (int i = 0; i < data.length(); i++) {
         data2[i] = char(data[i] ^ key[i]);
    }
    cout << data2;
}
