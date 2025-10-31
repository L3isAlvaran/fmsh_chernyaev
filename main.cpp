#include <algorithm>
#include <string>
#include <iostream>
#include <funkciya.h>
using namespace std;

void Swap(int& a, int& b) {  // Changed return type to void
    int temp = a;
    a = b;
    b = temp;
}

void reverse(int arr[], int size) {
    for (int i = 0; i < size/2; i++) {
        Swap(arr[i], arr[size-1-i]);
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[7] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr1, 7);
    return 0;
}



