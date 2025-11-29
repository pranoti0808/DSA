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
