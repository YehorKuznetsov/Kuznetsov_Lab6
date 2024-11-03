#include <iostream>

using namespace std;

void swapArrays(int* array1, int* array2, int size) {
    for (int i = 0; i < size; i++) {
        *(array1 + i) = *(array1 + i)+*(array2 + i);
        *(array2 + i) = *(array1 + i)-*(array2 + i);
        *(array1 + i) = *(array1 + i)-*(array2 + i);
    }

}
int main() {
    const int size = 5;
    int array1[size]= {1,2,3,4,5};
    int array2[size]= {6,7,8,9,10};
    cout << "First array is:" << endl;
    for (int i : array1) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Second array is:" << endl;
    for (int i : array2) {
        cout << i << " ";
    }
    cout << endl;
    swapArrays(array1, array2, size);
    cout<<"Arrays after swapping are:"<<endl;
    for (int i : array1) {
        cout << i << " ";
    }
    cout << endl;
    for (int i : array2) {
        cout << i << " ";
    }
}

