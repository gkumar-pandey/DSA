// * search a number x in arr[] by binary search 
#include<iostream>
using namespace std;

bool binarySearch(int arr[],int n, int target){

    int low = 0;
    int high = n-1;
    int flag = 0;

    while(low<=high){

        int mid = (low+high)/2;

        if(target == arr[mid]){
            flag =1;
            break;
             
        }else if(target < arr[mid]){
            high = mid-1;
        }
        else if(target>arr[mid]){
            low = mid+1;
        }
    }

    if(flag==1){
        return true;
    }else{
        return false;
    }

}

int main(){
    int arr[]={3,8,9,10,23,45};
    int sizeOfArray = sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    int res = binarySearch(arr, sizeOfArray, target);

   

    res ? cout<<"Find" : cout<<"Not found";

    return 0;
}