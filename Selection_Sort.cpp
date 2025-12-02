#include<iostream>
#include<vector>
using namespace std;

void SelectionSort(vector<int>&arr){
    int n = arr.size();
    for(int i = 0; i < n-1; i++){
        int MinIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[MinIndex]){
                MinIndex = j;
            }
        }
        if(MinIndex != i){
        swap(arr[i], arr[MinIndex]);
        }
    }

}

int main(){
    vector<int>arr1 = {45,23,12,10,15};
    SelectionSort(arr1);

    for(int x :arr1){
        cout<<x<<" ";
    }
    return 0;


}
