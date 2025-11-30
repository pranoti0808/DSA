#include<iostream>
#include<vector>
using namespace std;

int binarySearch( vector<int>arr, int key){
    int start = 0;
    int end1 = arr.size()-1;
    while(start<=end1){
        int mid = (start+end1)/2;
        if(key>arr[mid]){
            start = mid+1;
        }
        else if(key<arr[mid]){
            end1 = mid - 1 ;
        }
        else{
            return mid;
        }
    }
    return -1;

}

int main(){
    vector<int>arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int key = 0;

    int index = binarySearch(arr1, key);
    cout<< "Element Found at index: "<< index;
    return 0;

}
