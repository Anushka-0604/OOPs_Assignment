#include <iostream>
using namespace std;

template <class T>
T findMin(T arr[], int n) {
    T min = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] < min)
            min = arr[i];
    return min;
}

int main() {
    int arr[] = {4,2,8,1};
    cout << findMin(arr,4);
}
