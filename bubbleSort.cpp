#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

int main()
{
    int arr[] = {1 , 2 , 8 , 9, 6};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}
