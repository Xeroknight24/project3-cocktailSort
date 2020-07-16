#include<iostream>

using namespace std;

void printArray(int arr[], int size, bool sortedFlag) {
    if (sortedFlag == true) {
        cout << "Sorted Array: [";
    }
    if (sortedFlag == false) {
        cout << "Array: [";
    }
    for(int i=0;i<size;i++) {
        if(i==size-1){
            cout << arr[i];
        }
        else {
            cout << arr[i] << ", ";
        }
    }
    cout << "]" << endl;
}

void cocktailSort(int arr[], int size) {
    bool flag = true;
    int a = 0;
    int b = size-1;
    while(flag) {
        flag = false;
        for(int i=a;i<b;i++) {
            if(arr[i]>arr[i+1]) {
                swap(arr[i],arr[i+1]);
                flag = true;
            }
        }
        if (!flag) {
            break; 
        }
        flag = false; 
        b--;
        for(int j=b;j>=a;j--) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        a++;
    }
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    for (int i=0;i<size;i++){
        cout << "Enter number "<<i+1<<": ";
        cin >> arr[i];
    }
    printArray(arr, size, false);
    cocktailSort(arr, size);
    printArray(arr, size, true);
    return 0;
}
