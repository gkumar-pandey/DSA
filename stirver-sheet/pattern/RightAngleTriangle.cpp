#include<iostream>
using namespace std;

void printRightAngleTriangle(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printRightAngleTriangle(n);
    return 0;
}

/*
Right-Angled Triangle Pattern

Input Format: N = 3
Result: 
* 
* * 
* * *

Input Format: N = 6
Result:
* 
* * 
* * *
* * * *
* * * * *
* * * * * *

*/