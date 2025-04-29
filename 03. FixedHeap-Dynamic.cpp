#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5]; // Fixed size on heap
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 2;
    }
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    delete[] arr; // Must deallocate
    return 0;
}
