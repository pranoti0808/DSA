#include<iostream>
#include<vector>
using namespace std;

void InsertionSort(vector<int>&arr){
    int n = arr.size();
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;

    }
}
int main(){
    vector<int>arr1 = {45,23,20, 35, 30};
    InsertionSort(arr1);
    for(int x: arr1){
        cout<<x<<" ";
    }
    return 0;
}
