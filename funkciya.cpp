//
// Created by aach on 15.10.2025.
//
#include <string>
#include <iostream>
using namespace std;

string funcB(string data, string key) {
    string data2[data.length()] = {};
    for (int i = 0; i < data.length(); i++) {
         data2[i] = char(data[i] ^ key[i]);
    }
    return data2;
}
