//! Q. given an array arr[] find the index of element X through linear search
#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int x){
    int i=0;
    for(i=0; i<n; i++){
        if(x==arr[i]){
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[]= {2,3,8,0,7,67,34};
    int n = sizeof(arr)/sizeof(arr[0]);

    int res = linear_search(arr, n, 90);

    if(res== -1){
        cout<<"Number is not present in Array!"<<endl;
    }
    else{
        cout<<"Number present at "<<res<<endl;
    }

    return 0;
}
