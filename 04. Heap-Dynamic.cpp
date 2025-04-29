#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr; // Fully dynamic array (resizable on heap)
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    for (int val : arr) {
        cout << val << " ";
    }
    return 0;
}
