#include<iostream>
#include<vector>
using namespace std;

int LinearSearch(vector<int>arr, int key){
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int>arr1 = {1,3,2,4,23,11,5};
    int key = 3;

    int index = LinearSearch(arr1, key);
    cout<< "Element Found at index: "<< index;
    return 0;
}










/*
#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n, key;
    cin>>n>>key;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int index = LinearSearch(arr,n,key);
    cout << "Key element found at index : " << index;

    return 0;
}
*/
