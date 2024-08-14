#include<iostream>
using namespace std;


int sumOfnNumber(int n){
    if(n==0){
        return 0;
    }else {
        return n + sumOfnNumber(n-1);
    }
}

int main(){
   int num = 3;
     int sum = sumOfnNumber(num);

    cout<<sum<<endl;
    return 0;
}