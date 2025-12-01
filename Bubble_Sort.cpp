#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr){
    int n = arr.size();
    for(int i = 0 ; i < n; i++){
        bool isSwap = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}

int main(){
    vector<int>arr1 = {5,4,3,2,1};
    bubbleSort(arr1);

    for(int x: arr1){
        cout<<x<<" ";
    }


    return 0;
}
